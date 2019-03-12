#include <iostream>
#include <string>
#include <windows.h>
#include <algorithm>

using namespace std;

int CheckNumber(int Number){
    while (!(cin >> Number) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        wcout<<L".----------------------------------------------------------------------------------."<<endl;
        wcout<<L"|                                 Ошибка                                           |"<<endl;
        wcout<<L".----------------------------------------------------------------------------------."<<endl;
    }
    return Number;
}

int CheckArray(int Number){
    while (!(cin >> Number) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        wcout<<L".----------------------------------------------------------------------------------."<<endl;
        wcout<<L"|                                 Ошибка                                           |"<<endl;
        wcout<<L".----------------------------------------------------------------------------------."<<endl;
    }
    return Number;
}
