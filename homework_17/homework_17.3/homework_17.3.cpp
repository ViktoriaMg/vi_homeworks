#include <iostream>
#include <Windows.h>
using namespace std;

class BoundedArray {
private:
    static const int SIZE = 100;
    int arr[SIZE];

public:
    BoundedArray() {
        for (int i = 0; i < SIZE; ++i)
            arr[i] = 0;
    }

    void set(int index, int value) {
        if (index >= 0 && index < SIZE)
            arr[index] = value;
    }

    int get(int index) {
        if (index >= 0 && index < SIZE)
            return arr[index];
        return -1;
    }

    int size() const { return SIZE; }
};

class Set {
private:
    BoundedArray data;

public:
    void insert(int value) {
        if (value >= 0 && value < data.size())
            data.set(value, 1);
    }

    bool contains(int value) {
        if (value >= 0 && value < data.size())
            return data.get(value) == 1;
        return false;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Set mySet;
    mySet.insert(10);
    mySet.insert(20);

    cout << "Чи є 10 в множині? " << (mySet.contains(10) ? "Так" : "Ні") << endl;
    cout << "Чи є 50 в множині? " << (mySet.contains(50) ? "Так" : "Ні") << endl;

    return 0;
}
