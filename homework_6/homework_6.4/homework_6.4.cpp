#include <iostream>
#include <Windows.h>
using namespace std;

class Employee {
private:
    int age;
    int yearsOfService;
    double salary;

public:
    void setAge(int a) { age = a; }
    void setYearsOfService(int y) { yearsOfService = y; }
    void setSalary(double s) { salary = s; }

    int getAge() { return age; }
    int getYearsOfService() { return yearsOfService; }
    double getSalary() { return salary; }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Employee emp1, emp2;

    emp1.setAge(30);
    emp1.setYearsOfService(5);
    emp1.setSalary(45000);

    emp2.setAge(40);
    emp2.setYearsOfService(15);
    emp2.setSalary(75000);

    cout << "Перший службовець: Вік " << emp1.getAge()
        << ", Стаж " << emp1.getYearsOfService()
        << ", Зарплата " << emp1.getSalary() << "$\n";

    cout << "Другий службовець: Вік " << emp2.getAge()
        << ", Стаж " << emp2.getYearsOfService()
        << ", Зарплата " << emp2.getSalary() << "$\n";

    return 0;
}
