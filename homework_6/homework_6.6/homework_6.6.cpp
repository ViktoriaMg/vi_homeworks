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
    Employee(int a, int y, double s) {
        age = a;
        yearsOfService = y;
        salary = s;
    }

    int getAge() { return age; }
    int getYearsOfService() { return yearsOfService; }
    double getSalary() { return salary; }

    double getSalaryInThousands() {
        return round(salary / 1000.0) ;
    }

    void displayInfo() {
        cout << "Вік: " << age << ", Стаж: " << yearsOfService
            << " років, Зарплата: " << salary << "$\n";
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Employee emp1(30, 5, 45000);
    Employee emp2(40, 15, 75000);

    cout << "Інформація про першого службовця:" << endl;
    emp1.displayInfo();
    cout << "Зарплата в тисячах (округлена): " << emp1.getSalaryInThousands() << "$\n";

    cout << "\nІнформація про другого службовця:" << endl;
    emp2.displayInfo();
    cout << "Зарплата в тисячах (округлена): " << emp2.getSalaryInThousands() << "$\n";

    return 0;
}
