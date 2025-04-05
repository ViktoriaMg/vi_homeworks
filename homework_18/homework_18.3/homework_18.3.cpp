#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter a phrase: ";

    while (cin.get(ch))
    {
        if (ch == '!')
            cout << '$';
        else if (ch == '#')
            continue; // просто пропускаємо символ
        else
            cout << ch;
    }

    return 0;
}
