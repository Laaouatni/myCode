#include <iostream>

int main() 
{

int Numero_Variabile1;
std::cout   << "scrivi il Primo Numero: \n";
std::cin    >> Numero_Variabile1;

int Numero_Variabile2;
std::cout   << "scrivi il Secondo Numero: \n";
std::cin    >> Numero_Variabile2;

if (Numero_Variabile1 != 0 && Numero_Variabile2 != 0)
{
    if(Numero_Variabile1 > Numero_Variabile2)
    {
        int AddizioneVariabile = Numero_Variabile1 - Numero_Variabile2;
        std::printf ("\nil Risultato: %d", AddizioneVariabile); 
    }

    else
    {
        std::endl;
        goto ERROR:
    }
}

ERROR:

else 
{
std::cout << "\nERRORE";
}

}