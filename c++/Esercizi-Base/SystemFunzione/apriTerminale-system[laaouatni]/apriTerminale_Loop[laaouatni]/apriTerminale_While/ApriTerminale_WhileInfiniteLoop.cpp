#include <iostream>

int main () 
{
    int Numero_Volte = 0;

    /* ATTENZIONE: LOOP INFINITO, non eseguire il file (non mi assumo nessuna responsabilità)
    se vuoi eseguirlo lo stesso, perfavore apri "GESTIONE ATTIVITA" così puoi cliccare "termina il processo" */
    while (1) {
                          
    system("start");             // crea un terminale esterno (system è come scrivere su in terminale.)

    Numero_Volte++;              // serve per sapere quante volte, è stato creato un terminale.

    std::printf("hai aperto N. %d TERMINALI ", Numero_Volte);
    }     

    return 0;
}

/* 
MIT License

Copyright (c) 2021 Laaouatni Anas

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 
*/