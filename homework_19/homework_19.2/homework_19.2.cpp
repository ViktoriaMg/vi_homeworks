#include <iostream>
#include <Windows.h>

using namespace std;

int main(int argc, char* argv[]) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    if (argc < 2) {
        cout << "Аргументів командного рядка не передано.\n";
        return 0;
    }

    for (int i = argc - 1; i > 0; --i) {
        cout << argv[i] << " ";
    }
    cout << endl;

    return 0;
}
