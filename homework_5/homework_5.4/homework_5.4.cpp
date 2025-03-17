#include <iostream>
#include <Windows.h>
using namespace std;

int myFunc(unsigned short int x);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    unsigned short int x, y;

    cout << "Введіть число: ";
    cin >> x; //ініціалізація х

    y = myFunc(x);
    cout << "x: " << x << " y: " << y << "\n";
}

int myFunc(unsigned short int x) // не потрібна ;
{
    return (4 * x);
}
