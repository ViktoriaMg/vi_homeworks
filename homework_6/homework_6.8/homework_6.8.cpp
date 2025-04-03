#include <iostream>
#include <Windows.h>
using namespace std;

class Cat {
private:
    int itsAge;

public:
 
    Cat() { itsAge = 0; }
    Cat(int age) { itsAge = age; }
    int GetAge() const { return itsAge; }
    void SetAge(int age) { itsAge = age; }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Cat myCat(3);  // Створюємо кота з віком 3 роки

    cout << "Вік кота: " << myCat.GetAge() << " роки" << endl;

    myCat.SetAge(5);  // Змінюємо вік кота
    cout << "Новий вік кота: " << myCat.GetAge() << " років" << endl;

    return 0;
}
