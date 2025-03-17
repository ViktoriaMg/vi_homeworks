// homework_5.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int MyFunc(unsigned short int x, unsigned short int y);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    unsigned short int x, y;

    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    int Result = MyFunc(x, y);

    if (Result == -1)
        cout << "Помилка: Ділення на нуль неможливе!" << endl;
    else
        cout << "Результат ділення: " << Result << endl;

    return 0;

}

 int MyFunc(unsigned short int x, unsigned short int y) {
     if (y == 0)
         return -1;
    return (x / y);
}

