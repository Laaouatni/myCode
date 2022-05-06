#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

#define ESC 27
#define SOTTO 80

namespace anas 
{  
    void PinGenerator() 
    {
        std::string ElencoNumeri("0123456789");
        char CharNumeri[ElencoNumeri.length()];

        for(int Numero_Volte = 0; Numero_Volte < 4; Numero_Volte++)  
        {
            int NumeroCarattere = rand() % sizeof(CharNumeri);
            CharNumeri[NumeroCarattere] = ElencoNumeri[NumeroCarattere];
            std::cout << CharNumeri[NumeroCarattere]; 
        }
    }

    void PinGenRepeater() 
    {
        anas::PinGenerator();
        char NumberInput = '0';

        _getch();

        switch  (
                    (
                        NumberInput = _getch()
                    )
                ) 

        {
            case ESC:
                std::cout << std::endl;
                std::printf("\n\nFinished\n");
                break;

            case SOTTO:
                std::cout << std::endl;
                anas::PinGenRepeater();
            
            default:
                std::cout << "\n\nERRORE: clicca SOTTO\n\n";
                break;
        }
    }
    
}


int main()
{
    system("cls");
    std::printf("the program is started... \n \n");
    anas::PinGenRepeater();
}

/* 
MIT License

Copyright (c) 2021 Laaouatni Anas

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 
*/