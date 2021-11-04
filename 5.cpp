#include <iostream>
#include "windows.h"
using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, n;
    cout << "Input number ";
    cin >> a;
    n = a;
    a /= 10;
    cout << a << endl;
    n %= 10;
    cout << n << endl;
}
