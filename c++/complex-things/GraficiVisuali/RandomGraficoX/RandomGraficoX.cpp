#include <iostream>
#include <conio.h>
#include <stdio.h>

#define KEY_SOTTO 80
#define KEY_ESCI 27

int main()
{
    std::cout <<"programma iniziato\n\n\n";

    char LetteraInput = 'a';

    _getch(); 

     switch  (
                    (
                        LetteraInput = _getch()
                    )
                ) 

        {
            case KEY_SOTTO:
            {
                int NumeroRandom = rand() % 10;
                for (int NumeroVolte = NumeroRandom; NumeroVolte > 0; NumeroVolte--)
                {
                    std::cout << "#";
                }
                std::cout << std::endl;
            }

            case KEY_ESCI:
                std::cout << "programma finito\n\n";
                break;

            default:
                std::cout << "\n\nERRORE: clicca RIPROVA\n\n";
                break;
        }
    
}

/* 
MIT License

Copyright (c) 2021 Laaouatni Anas

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 
*/