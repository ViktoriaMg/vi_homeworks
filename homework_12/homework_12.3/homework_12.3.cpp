#include <iostream>
using namespace std;

int main() {
    unsigned short SomeArray[5][4];  // Масив розміром 5x4

    // Ітерація по масиву з правильними межами
    for (int i = 0; i < 5; i++)      // 5 рядків
        for (int j = 0; j < 4; j++)  // 4 стовпці
            SomeArray[i][j] = i + j;

    // Виведення масиву
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cout << SomeArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
