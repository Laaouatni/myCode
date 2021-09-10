#include <stdio.h>
#include <conio.h>
#include <string>
#include <vector>
#include <iostream>

/* PasswordString.push_back()
PasswordString.at(Lettere_Scritte); */


// il programma per adesso è sospeso, dopo lo finirò
namespace anas 
{  
    void passwordGenerator() 
    {
        std::vector<std::string> PasswordString[7];

        std::string ElencoAlfabeto("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");

        std::vector<char> CharAlfabeto;

        for (int Lettere_Create = 0; Lettere_Create < 8; Lettere_Create++)  
        {
            int num_car_rand  = rand() % sizeof(CharAlfabeto);
            PasswordString.push_back(ElencoAlfabeto[num_car_rand]); 
        }

        for (int N_Lettere_Scritte = 0; N_Lettere_Scritte < 8; N_Lettere_Scritte++)
        {
            std::cout << PasswordString[N_Lettere_Scritte];
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