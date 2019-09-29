#include <Windows.h>
#include <iostream>
#include "CPU_Calc.h"
using namespace std;




int main()
{   
    int _c = 0;
    CPU_Calc CPUA;

    while (_c == 0)
    {
        cout << CPUA.GetCPULoad() * 100 << "\n";
        Sleep(1000);
    }

    return 0;
}



