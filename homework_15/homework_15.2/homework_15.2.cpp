#include <iostream>
#include <Windows.h>
using namespace std;


class Vehicle {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car (загальний) запускається." << endl;
    }

    // stop() — залишається чисто віртуальною, тому Car — абстрактний
};


class SportsCar : public Car {
public:
    void stop() override {
        cout << "Спортивний автомобіль зупиняється швидко." << endl;
    }
};


class Wagon : public Car {
public:
    void stop() override {
        cout << "Фургон гальмує повільно." << endl;
    }
};


class Bus : public Car {
public:
    void stop() override {
        cout << "Автобус плавно зупиняється." << endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    SportsCar sc;
    Wagon w;
    Bus b;


    sc.start(); sc.stop();
    w.start();  w.stop();
    b.start();  b.stop();

    return 0;
}
