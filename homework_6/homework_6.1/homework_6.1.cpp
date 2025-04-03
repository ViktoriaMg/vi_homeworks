#include <iostream>
#include <Windows.h>
using namespace std;

long long MyFunc(int x, int y) {
    if (y == 0) {
        return 1;
    }
    return x * MyFunc(x, y - 1);
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, y;

    cout << "Введіть число: ";
    cin >> x;
    cout << "Введіть показник ступеня: ";
    cin >> y;


    if (y < 0) {
        cout << "Показник ступеня повинен бути невід'ємним." << endl;
        return 1;
    }

    long long result = MyFunc(x, y);
    cout << x << "^" << y << " = " << result << endl;

    return 0;
}