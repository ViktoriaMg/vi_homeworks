#include <iostream>
#include <Windows.h> 
using namespace std;

unsigned short int myFunc(unsigned short int x); // функція повертає значення тому не може бути void

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    unsigned short int x, y;

    cout << "Введіть число: "; 
    cin >> x; 

    y = myFunc(x); // бо потрібно передавати функції конкретне значення

    cout << "x: " << x << " та y: " << y << "\n";

    return 0;
}
unsigned short int myFunc(unsigned short int x)
{
    return (4 * x);
}
