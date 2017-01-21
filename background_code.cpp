
#include "background_code.h"


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
