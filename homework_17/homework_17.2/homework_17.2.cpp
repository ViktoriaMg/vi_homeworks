#include <iostream>
#include <Windows.h>
using namespace std;

class BoundedArray {
private:
    static const int SIZE = 10; 
    int arr[SIZE];

public:
    
    BoundedArray() {
        for (int i = 0; i < SIZE; ++i)
            arr[i] = 0;
    }

   
    void set(int index, int value) {
        if (index >= 0 && index < SIZE)
            arr[index] = value;
        else
            cout << "Помилка: індекс за межами масиву\n";
    }

  
    int get(int index) {
        if (index >= 0 && index < SIZE)
            return arr[index];
        else {
            cout << "Помилка: індекс за межами масиву\n";
            return -1;
        }
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    BoundedArray arr;
    arr.set(2, 99);           
    cout << arr.get(2) << endl; 

    arr.set(15, 10);          // Спроба вийти за межі
    cout << arr.get(15) << endl;

    return 0;
}
