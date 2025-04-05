#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    clog << "Початок програми: очікується введення додатного числа.\n";

    cout << "Введіть додатне ціле число: ";
    cin >> number;

    // Перевірка на помилкове введення: нечислове або від’ємне
    if (cin.fail()) {
        cerr << "Помилка: введено нечислове значення!" << endl;
        return 1;
    }
    if (number <= 0) {
        cerr << "Помилка: число повинно бути додатним!" << endl;
        return 1;
    }

    cout << "Дякую! Ви ввели додатне число: " << number << endl;
    clog << "Програма завершилася успішно.\n";

    return 0;
}
