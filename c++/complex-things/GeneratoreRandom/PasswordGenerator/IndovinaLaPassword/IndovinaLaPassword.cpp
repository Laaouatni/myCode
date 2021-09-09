#include <stdio.h>
#include <conio.h>
#include <string>
#include <vector>

/* #define ESC 27
#define SOTTO 80 */

/* PasswordString.push_back()
PasswordString.at(Lettere_Scritte); */

namespace anas 
{  
    void passwordGenerator() 
    {
        std::vector<std::string> PasswordString;

        std::string ElencoAlfabeto("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
        char CharAlfabeto[ElencoAlfabeto.length()];

        for (int Lettere_Create = 0; Lettere_Create < 8; Lettere_Create++)  
        {
            int             NumeroCarattere     = rand() % sizeof(CharAlfabeto);
            CharAlfabeto   [NumeroCarattere]    = ElencoAlfabeto[NumeroCarattere];
            
            PasswordString.push_back(CharAlfabeto[NumeroCarattere]); 
        }

        for (int Lettere_Scritte = 0; Lettere_Scritte < 8; Lettere_Scritte++)
        {
            printf (   PasswordString.at(Lettere_Scritte)    );
        }
    }
}

int main()
{
    system("cls");
    std ::printf("the program is started... \n \n");
    anas::passwordGenerator();
}

/* 
MIT License

Copyright (c) 2021 Laaouatni Anas

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 
*/