#ifndef BACKGROUND_CODE_H_INCLUDED
#define BACKGROUND_CODE_H_INCLUDED

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

string intToStr(int n);

string compressRLE(string user_input);

string decompressRLE(string compressed);

string compressBYTERUN(string user_input);

string decompressBYTERUN(string compressed);


#endif // BACKGROUND_CODE_H_INCLUDED
