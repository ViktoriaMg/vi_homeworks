#include <iostream>
#include <Windows.h>
using namespace std;

// Базовий клас Rocket
class Rocket {
public:
    void launch() {
        cout << "Ракета запускається вертикально!" << endl;
    }
};

// Базовий клас Airplane
class Airplane {
public:
    void fly() {
        cout << "Літак летить горизонтально!" << endl;
    }
};

class JetPlane : public Rocket, public Airplane {
public:
    void jetBoost() {
        cout << "Реактивний літак використовує прискорення!" << endl;
    }
};

class Boeing747 : public JetPlane {
public:
    void servePassengers() {
        cout << "Boeing 747 обслуговує пасажирів на борту!" << endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    Boeing747 plane;

    plane.launch();          // метод з Rocket
    plane.fly();             // метод з Airplane
    plane.jetBoost();        // метод з JetPlane
    plane.servePassengers(); // метод з Boeing747

    return 0;
}
