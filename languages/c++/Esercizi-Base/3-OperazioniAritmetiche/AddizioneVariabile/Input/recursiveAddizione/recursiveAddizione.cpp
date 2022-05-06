#include <iostream>
#include <windows.h>

int main()
{
    int             rec_num; 
    std::cout   <<  "inserisci il tuo numero: " << std::endl;
    std::cin    >>  rec_num;
    
    while (rec_num != 0) 
    {
        int new_num =   rec_num + rec_num;
        std::cout   <<  rec_num << " + " << rec_num << " = " << new_num << std::endl;
        rec_num =       new_num;
        Sleep(200);
    }
}