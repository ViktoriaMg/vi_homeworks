#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 10;
    int array[SIZE][SIZE]; // Оголошуємо 10x10 масив

 
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            array[i][j] = 0;
        }
    }

   
    cout << "Масив 10x10, заповнений нулями:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
