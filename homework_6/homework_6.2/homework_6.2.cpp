#include <iostream>
#include <Windows.h>
using namespace std;

class Employee {
public:
    int age;
    int yearsOfService;
    double salary;
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Employee emp1, emp2;
    emp1.age = 30;
    emp1.yearsOfService = 5;
    emp1.salary = 45000;

    emp2.age = 40;
    emp2.yearsOfService = 15;
    emp2.salary = 75000;

    cout << "Перший службовець: Вік " << emp1.age
        << ", Стаж " << emp1.yearsOfService
        << ", Зарплата " << emp1.salary << "$\n";

    cout << "Другий службовець: Вік " << emp2.age
        << ", Стаж " << emp2.yearsOfService
        << ", Зарплата " << emp2.salary << "$\n";

    return 0;
}
