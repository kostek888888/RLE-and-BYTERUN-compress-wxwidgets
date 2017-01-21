
#include "background_code.h"

/*!
*   @brief Funkcja konwertuje wartość typu int podaną w argumencie na napis. Używana na etapie kompresji liczby powtórzeń danego znaku i zapisania jej jako tekst skompresowany
*
*	 @param n Wyliczona liczba powtórzeń danego znaku jako typ int 
*	 @return Liczba powtórzeń znaku typu string w postaci skompresowanej
*/
string intToStr(int n)
{
    string tmp, ret;
    if(n < 0)
    {
        ret = "-";
        n = -n;
    }

    do
    {
        tmp += n % 10 + 48;
        n -= n % 10;
    }
    while(n /= 10);

    for(int i = tmp.size()-1; i >= 0; i--)
        ret += tmp[i];

    return ret;
}




/*!
*   @brief Kompresja algorytmem RLE: Najpierw z wejściowego ciągu znaków usuwamy znak oddzielenia "`" poszczególnych powtarzających się podciągów liter.  Następnie w pętli odczytujemy tak postały ciąg znak po znaku.  Jeśli obok siebie występują dwa takie same znaki to zwiększany jest licznik powtórzeń.  Natomiast jeśli znaki leżące obok siebie przestały się powtarzać program dodaje do ciągu wyjściowego znak który się powtarzał oraz liczbę jego powtórzeń zmniejszoną o jeden oraz przekonwertowaną na tekst funkcją IntToStr(), wszystko to pomiędzy znakami oddzielającymi "`".  W przypadku gdy w ciągu wejściowym był tylko jeden znak to jest on dodawany do ciągu wyjściowego.  Na koniec licznik powtórzeń jest przywracany do wartości 1
*
*	 @param user_input Ciąg wejściowy nieskompresowany.
*	 @return Ciąg wyjściowy skompresowany.
*/
string compressRLE(string user_input)
{
    string compressed, removed_character;

    for ( int z=0 ; z < user_input.length() ; z++ )
    {
        if( user_input[z] != '`' )
        {
            removed_character += user_input[z];
        }
    }

    int how_many = 1;

    for(int i=0 ; i < removed_character.length() ; i++)
    {
        if ( removed_character[i] == removed_character[i+1] )
        {
            how_many++;
        }
        else
        {
            if ( how_many==1 )
            {
                compressed += removed_character[i];
            }
            else
            {
                compressed += '`';
                compressed += removed_character[i];
                how_many -= 1;
                compressed += intToStr(how_many);
                compressed += '`';
            }

            how_many = 1;
        }
    }

    return compressed;
}



/*!
*   @brief  Dekompresja RLE: \n Funkcja przeszukuje skompresowany ciąg wejściowy, w pętli znak po znaku, szukając w nim znaku oddzielenia "`", po którym następuje znak który sie powtarza oraz pierwsza cyfra powtórzeń np 'c3. Po znalezieniu takiego znaku funkcja ustawia zmienną bool na true i iteruje dalej szukając dalszych cyfr powtórzeń oraz drugiego znaku "`" oznaczającego koniec powtórzenia. Gdy tak sie stanie  pętla while jest przerywana i otrzymujemy liczbę znaków jakie zajmuje powtórzenie np 'c321' w iteratorze search_end. \n Następnie przechodzimy od drugiego znaku powtórzenia do jego końca zamieniając zapisując kolejne cyfry powtórzenia i zamieniając je na wartość int funkcją atoi(). Gdy to sie stanie funkcja wpisuje do ciągu wyjściowego dany znak tyle razy ile się powtórzył ,a iterator i przeszukujący cały ciąg wejściowy przesuwa się do przodu ciągu wejściowego aby zbadać następne skompresowane znaki\n Natomiast jeśli zmienna boolowska ma wartość false to nie ma powtórzenia i znak jest wpisywany do ciągu wyjściowego, jeśli do zbadania był tylko jeden znak to jest on wpisywany do ciągu wejściowego. Główna pętla for kończy się wraz z końcem ciągu wejściowego*
*	 @param compressed Ciąg wejściowy skompresowany
*	 @return Ciąg wyjściowy nieskompresowany
*/

string decompressRLE(string compressed)
{
    string user_input;

    for(int i=0 ; i < compressed.length() ; i++)
    {
        if( compressed[i] == '`' )
        {
            int search_end = i+2;
            bool found_it=false;
            while( search_end <= compressed.length() )
            {
                if( compressed[search_end] == '`' )
                {
                    found_it = true;
                    break;
                }
                else
                {
                    search_end++;
                }
            }
            if( found_it == true )
            {
                string compartment_string;
                for( int j=i+2 ; j < search_end ; j++)
                {
                    compartment_string += compressed[j];
                }
                int compartment = atoi(compartment_string.c_str());
                for ( int g=0 ; g <= compartment ; g++)
                {
                user_input += compressed[i+1];
                }
                i = search_end;
            }
            else
            {
                user_input += compressed[i];
            }
        }
        else
        {
            user_input += compressed[i];
        }
    }

    return user_input;
}



/*!
*   @brief Kompresja algorytmem Byterun: \n Funkcja przegląda cały ciąg wejściowy szukając czy znak następny jest taki sam jak ten badany i zwiększając licznik powtórzeń znaku. \n Jeśli znaki dwa znaki się nie powtarzają to w pętli while sprawdzane jest czy po znaku badanym nie występują dwa takie same znaki. Jeśli nie to zwiększany jest licznik niepowtarzających się znaków, aź do momentu gdy warunek pętli przestanie być prawdziwy. Po wyjściu z pętli liczba niepowtarzających się znaków jest konwertowana na tekst, oddzielana przecinkiem i wprowadzana w ciąg wyjściowy, razem z niepowtarzającymi się znakami oddzielonymi przecinkiem. Przesuwany jest też iterator głównej pętli za skompresowane już znaki\n  Natomiast jeśli znaki się powtarzają oznacza się liczbę znaków powtarzających się jako -a znaków gdzie 'a' to liczba powtórzeń -1, oraz wprowadza się minus, liczbę powtórzeń, i znak powtórzony do ciągu wyjściowego odpowiednio oddzielając je przecinkami. \n Na koniec zmienne liczące są resetowane*
*	 @param user_input Ciąg wejściowy nieskompresowany.
*	 @return Ciąg wyjściowy skompresowany.
*/

string compressBYTERUN(string user_input)
{
    string compressed;


    int how_many = 1;
    int not_match = 1;

    for( int i=0 ; i < user_input.length() ; i++)
    {
        if( user_input[i] == user_input[i+1] )
        {
            how_many++;
        }
        else
        {
            if( how_many == 1 )
            {
                int j=i;
                while( j+2 <= user_input.length() && user_input[j+1] != user_input[j+2] )
                {
                    not_match++;
                    j++;
                }
                compressed += intToStr(not_match);
                compressed += ",";
                for( j=i ; j < (i+not_match) ; j++ )
                {
                    compressed += user_input[j];
                    compressed += ",";
                }
                i += not_match-1;
            }
            else
            {
                compressed += "-";
                compressed += intToStr(how_many-1);
                compressed += ",";
                compressed += user_input[i];
                compressed += ",";
            }
            how_many = 1;
            not_match = 1;
        }
    }

    return compressed;
}


/*!
*   @brief Dekompresja Byterun: \n Liczba dodatnia oznacza liczbę niepowtarzających się znaków a liczba ujemna liczbę znaków powtarzających się -1. Wykaz użytych kodów ASCII: 44:przecinek, 45:minus, <48,57> cyfra,  \n Funkcja przeszukuje ciąg wejściowy. Jeśli znaleziono minus a po nim cyfrę to określany ile jeszcze znaków zajmuje liczba powtórzeń. Następnie przechodzimy przez cyfry powtórzenia umieszczając je w pomocniczym ciąg i  dodając do każdej z nich 1 (-3=4 powtórzenia) i konwertując na int i wpisując powtarzający się znak do ciągu wyjściowego tyle razy ile się powtórzył. \n Jeśli natomiast w ciągu wejściowym natrafimy na cyfrę niepoprzedzoną minusem zliczamy ile jest w ciągu wejściowym cyfr określających liczbę niepowtarzających się znaków. Jeśli po cyfrze nie ma przecinka znaczy to że jest więcej cyfr składających się na liczbę powtórzeń i trzeba zwiększyć iterator j określający ich liczbę. Następnie jeśli (j==i) to od razu znana jest liczba niepowtarzających sie znaków, można ją pobrać do ciągu pomocniczego i przekonwertować na int Jeśli (j!=i) wtedy od początku cyfr określających liczbę niepowtarzających się znaków do ich końca są one zapisywane do pomocniczego ciągu tekstowego i konwertowane na liczbę.  Następnie wypisujemy wszystkie niepowtarzające się znaki pomijając przecinki umieszczone po każdej literze.
*	 @param compressed Ciąg wejściowy skompresowany
*	 @return Ciąg wyjściowy nieskompresowany
*/

string decompressBYTERUN(string compressed)
{
    string user_input;

    for( int i=0 ; i < compressed.length() ; i++ )
    {
        if( compressed[i] == 45 && compressed[i+1] >= 48 && compressed[i+1] <= 57 )
        {
            int j=i+2;
            while( compressed[j] != 44 )
            {
                j++;
            }
            j--;
            string compartment_string;
            int g=0;
            for ( g=i+1 ; g <= j ; g++ )
            {
                compartment_string += compressed[g];
            }
            int compartment = ( atoi(compartment_string.c_str()) + 1 );
            for ( g = 0 ; g < compartment ; g++ )
            {
                user_input += compressed[j+2];
            }
            i = j+3;
        }
        else
        {
            if( compressed[i] >= 48 && compressed[i] <= 57 )
            {
                int j=i;
                while ( compressed[j] != 44 )
                {
                    j++;
                }
                j--;
                string compartment_string;
                int compartment = 0;
                int g=0;
                if( j == i )
                {
                    compartment_string += compressed[i];
                    compartment = atoi(compartment_string.c_str());
                }
                if( j != i )
                {
                    for( g=i ; g <= j ; g++ )
                    {
                        compartment_string += compressed[g];
                    }
                    compartment = atoi(compartment_string.c_str());
                }
                for ( g=0 ; g < compartment ; g++ )
                {
                    user_input += compressed[j+2];
                    j += 2;
                }
                i = j+1;
            }
        }
    }

    return user_input;
}
