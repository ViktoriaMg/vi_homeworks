#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string fullName;

    cout << "Введіть ваше повне ім'я: ";
    getline(cin, fullName);  

    cout << "Ваше ім'я: " << fullName << endl;

    return 0;
}
