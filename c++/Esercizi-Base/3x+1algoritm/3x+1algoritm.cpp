#include <iostream>
#include <windows.h>

namespace anas 
{
    void SimpleAlgoritm (int InputUtente) 
    {
        std::cout << "scrivi il primo numero dell'algoritmo: ";
        std::cin  >> InputUtente;
        
        std::cout << "OK. il Numero Scelto è: "  << InputUtente << std::endl;
    }

    void RecursiveAlgoritm (int InputUtente) 
    {
        if(InputUtente % 2 == 0)
        {
            std::cout << InputUtente << " = PARI!" << std::endl;
            InputUtente = InputUtente / 2;
            std::cout << "Ok. Adesso Numero DIVISO = \t" << InputUtente << std::endl;
            Sleep(500);
        }
        else
        {
            std::cout << InputUtente << " = DISPARI!" << std::endl;
            InputUtente = 3 * InputUtente + 1;
            std::cout << "Ok. Adesso Numero 3x+1 = \t"  << InputUtente << std::endl;
            Sleep(500);
        }

        anas::RecursiveAlgoritm(InputUtente);
    }
}

int main()
{
    int InputUtente;
    
    anas::SimpleAlgoritm    (InputUtente);
    anas::RecursiveAlgoritm (InputUtente);
}

/* 
MIT License

Copyright (c) 2021 Laaouatni Anas

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 
*/