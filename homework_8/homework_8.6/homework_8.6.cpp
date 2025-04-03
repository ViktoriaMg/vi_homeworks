#include <iostream>

using namespace std;

int main()
{
    int SomeVariable = 5;
    cout << "SomeVariable: " << SomeVariable << "\n";

    int* pVar = &SomeVariable;  // Вказівник pVar вказує на адресу змінної SomeVariable

    *pVar = 9;  

    cout << "SomeVariable: " << SomeVariable << "\n";  

    return 0;
}
