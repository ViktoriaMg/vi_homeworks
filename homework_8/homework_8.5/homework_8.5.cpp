#include <iostream>

using namespace std;

int main()
{
    int value = 9;       
    int* pInt = &value;  // Ініціалізація вказівника адресою змінної

    cout << "The value at pInt: " << *pInt << endl;  
    return 0;
}
