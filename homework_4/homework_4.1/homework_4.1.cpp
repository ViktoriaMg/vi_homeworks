#include <iostream>
#include "windows.h"

using namespace std;

int main()

{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b;

	cout << "Введіть два цілих числа: ";
	cin >> a >> b;

	if (a > b) a = b;

	else b = a;

	cout << "Результат: a = " << a << " та b = " << b << endl;

	return 0;

}
