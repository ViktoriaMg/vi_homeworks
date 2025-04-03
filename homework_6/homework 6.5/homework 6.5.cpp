#include <iostream>
#include <Windows.h>
#include <cmath>
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

    double getSalaryInThousands() {
        return round(salary / 1000) ;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Employee emp;
    emp.setAge(30);
    emp.setYearsOfService(5);
    emp.setSalary(45678);

    cout << "Службовець: Вік " << emp.getAge()
        << ", Стаж " << emp.getYearsOfService()
        << ", Зарплата " << emp.getSalary() << "$\n";
    cout << "Зарплата в тисячах (округлена до 10): " << emp.getSalaryInThousands() << "$\n";

    return 0;
}
