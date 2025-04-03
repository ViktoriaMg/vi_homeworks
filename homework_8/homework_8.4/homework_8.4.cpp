#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int yourNumber;         
    int* pNumber = &yourNumber; 

    *pNumber = 100;  // Присвоєння значення 100 змінній через вказівник

    cout << "Значення змінної yourNumber: " << yourNumber << endl; 

    return 0;
}
