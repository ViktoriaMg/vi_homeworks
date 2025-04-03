#include <iostream>
#include <Windows.h>
using namespace std;

class Square {
private:
    int side; // Закрита змінна

public:
  
    Square() { side = 0; }
    Square(int s) { side = s; }

    int getSide() { return side; }
    void setSide(int s) { side = s; }

    // Метод для обчислення площі
    int getArea() { return side * side; }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Square sq(5);
    cout << "Сторона квадрата: " << sq.getSide() << endl;
    cout << "Площа квадрата: " << sq.getArea() << endl;

    sq.setSide(10);
    cout << "Нова сторона: " << sq.getSide() << endl;
    cout << "Нова площа: " << sq.getArea() << endl;

    return 0;
}
