#include <iostream>

using namespace std;

int main() {
    int value = 10;

    int& ref = value;       
    int* ptr = &value;      

    ref = 20;               
    cout << "IF ref = 20: value = " << value << endl;

    *ptr = 30;              
    cout << "IF *ptr = 30: value = " << value << endl;

    return 0;
}
