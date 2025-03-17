
#include <iostream>
#include "windows.h"

using namespace std;

unsigned long int Perimeter(unsigned short int Length, unsigned short int Width);

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned short int Length, Width;

	cout << "Введіть довжину прямокутника: "; 
	cin >> Length;

	cout << "Введіть ширину прямокутника: ";
	cin >> Width;
	//виклик функції та виведення результату
	cout << "Периметр прямокутника: " << Perimeter (Length, Width) << endl;

	return 0;
}
//визначення функції та обчислення периметру 
unsigned long int Perimeter (unsigned short int Length, unsigned short int Width) {
	return 2 * Length + 2 * Width;

}

