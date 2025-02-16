// homework_3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int MyAge = 31;
	double BackyardArea = 113.5;
	long long stars_in_galaxy = 1000000000;
	double avg_monthly_rainfall = 43.7;

	cout << "Ваш вік: " << MyAge << endl;
	cout << "Площа вашого заднього двору: " << BackyardArea << " м^2" << endl;
	cout << "Кількість зірок у галактиці: " << stars_in_galaxy << endl;
	cout << "Середній рівень випадання опадів за січень: " << avg_monthly_rainfall << " мм" << endl;

	const double PI = 3.14;
	float pi_float = static_cast<float>(PI);

	cout << "Значення PI: " << PI << endl;
	cout << "Значення PI у форматі float: " << pi_float << endl;


	return 0;
}
