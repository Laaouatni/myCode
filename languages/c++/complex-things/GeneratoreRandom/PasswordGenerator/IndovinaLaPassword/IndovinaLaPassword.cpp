#include <stdio.h>
#include <conio.h>
#include <string>
#include <vector>
#include <iostream>

// il programma per adesso è sospeso, dopo lo finirò
namespace anas 
{  
    void GetInputPassword()
    {
        std::cout << "\n\nInput Password: ";
        std::string FirstPassword[];
        std::cin >> FirstPassword;
        std::cout << "la password è... " << FirstPassword << "\nAdesso AI cercherè di trovare la password!";
    }

    void passwordGenerator() 
    {
        std::string ElencoAlfabeto("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");


            int NumeroCarattereDaTestare = 0;
            int NumeroCarattereAttuale = 0;
            /* if(FirstPassword[NumeroCarattereDaTestare] == ElencoAlfabeto[NumeroCarattereDaTestare]) */

            switch  (
                        (
                            FirstPassword [NumeroCarattereDaTestare]
                        )
                    )
            
            {
                case FirstPassword[NumeroCarattereDaTestare]:
                    std::cout<<FirstPassword[NumeroCarattereDaTestare];
            }
        }
        
    }
}

int main()
{
    system("cls");
    std ::printf("the program is started... \n \n");
        std::cout << "\n\nInput Password: ";
        std::string FirstPassword[7];
        std::cin >> FirstPassword[7];
    anas::passwordGenerator();
}

/* 
MIT License

Copyright (c) 2021 Laaouatni Anas

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 
*/