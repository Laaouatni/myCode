#include <iostream>
#include <string>

int main()
{
    std::string ElencoEmoji("abcdefghijklmnopqrstuvwxyz");
    
    char CharEmoji[ElencoEmoji.length()];

    for (int NumeroVolte = 0; NumeroVolte < sizeof(CharEmoji); NumeroVolte++) {
        CharEmoji[NumeroVolte] = ElencoEmoji[NumeroVolte];
        std::cout << CharEmoji[NumeroVolte] << " ";
    }

    return 0;
}