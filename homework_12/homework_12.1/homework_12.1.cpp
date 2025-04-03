#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 3; 
    int field[SIZE][SIZE]; 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            field[i][j] = 0; // Ініціалізація всіх елементів масиву значенням 0
        }
    }

    cout << "Поле для гри в хрестики-нулики:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
