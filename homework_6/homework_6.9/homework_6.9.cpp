#include <iostream>
#include <Windows.h>
using namespace std;

class TV {
public:
    TV() { itsStation = 1; }  // Додаємо конструктор за замовчуванням
    TV(int station) { itsStation = station; } // Додаємо конструктор з параметром

    void SetStation(int Station) { itsStation = Station; }
    int GetStation() const { return itsStation; }

private:
    int itsStation;
};

int main() { //int
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    TV myTV;
    myTV.SetStation(9);  // Використовуємо метод SetStation

    TV myOtherTV(2);   

    cout << "Станція першого TV: " << myTV.GetStation() << endl;
    cout << "Станція другого TV: " << myOtherTV.GetStation() << endl;

    return 0;
}
