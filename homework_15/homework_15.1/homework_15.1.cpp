#include <iostream>
#include <Windows.h>
using namespace std;

// Абстрактний клас
class Vehicle {
public:
    virtual void start() = 0;       
    virtual void stop() = 0;        
    virtual ~Vehicle() {}           
};

// Клас Car (Легковий автомобіль)
class Car : public Vehicle {
public:
    void start() override {
        cout << "Легковий автомобіль заводиться..." << endl;
    }

    void stop() override {
        cout << "Легковий автомобіль зупиняється." << endl;
    }
};

// Клас Bus (Автобус)
class Bus : public Vehicle {
public:
    void start() override {
        cout << "Автобус заводиться..." << endl;
    }

    void stop() override {
        cout << "Автобус зупиняється." << endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Car car;
    Bus bus;

    car.start();
    car.stop();

    bus.start();
    bus.stop();

    return 0;
}
