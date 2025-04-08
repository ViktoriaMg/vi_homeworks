#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Animal {
private:
    string name;

public:
    Animal(string n) : name(n) {}

    void speak() {
        cout << "Я кіт, мене звати " << name << endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Animal cat("Мурчик");
    cat.speak();

    return 0;
}
