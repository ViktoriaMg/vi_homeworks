#include <iostream>
using namespace std;

int main() {
    int counter = 100;
    while (counter >= 10) {  // Змінили умову на counter >= 10
        cout << "counter now: " << counter << endl;
        counter--;  // Зменшуємо counter
    }
    return 0;
}
