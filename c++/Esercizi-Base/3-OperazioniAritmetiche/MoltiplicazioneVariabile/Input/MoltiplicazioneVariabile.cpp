#include <iostream>

int main() {

int Numero_Variabile1;
std::cout   << "scrivi il Primo Numero: \n";
std::cin    >> Numero_Variabile1;

int Numero_Variabile2;
std::cout   << "scrivi il Secondo Numero: \n";
std::cin    >> Numero_Variabile2;

int MoltiplicazioneVariabile = Numero_Variabile1 * Numero_Variabile2;
std::printf ("\nil Risultato: %d", MoltiplicazioneVariabile);
}