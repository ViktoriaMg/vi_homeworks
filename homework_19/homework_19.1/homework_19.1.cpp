#include <iostream>
#include <fstream>
#include <cctype>
#include <Windows.h>

using namespace std;

int main(int argc, char* argv[]) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 

    if (argc < 2) {
        cerr << "Помилка: не вказано ім'я файлу.\n";
        return 1;
    }

    ifstream file(argv[1]);
    if (!file.is_open()) {
        cerr << "Не вдалося відкрити файл: " << argv[1] << endl;
        return 1;
    }

    char ch;
    while (file.get(ch)) {
        if (isprint(static_cast<unsigned char>(ch))) {
            cout << ch;
        }
    }

    file.close();
    return 0;
}
