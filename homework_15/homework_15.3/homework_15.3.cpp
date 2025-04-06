#include <iostream>
#include <Windows.h>
using namespace std;

class Sample {
private:
    int id;                       
    static int count;             

public:
    Sample(int _id) : id(_id) {
        ++count;
        cout << "Об'єкт " << id << " створено. Активних: " << count << endl;
    }

    ~Sample() {
        --count;
        cout << "Об'єкт " << id << " знищено. Залишилось: " << count << endl;
    }

    static int getCount() {
        return count;
    }
};

int Sample::count = 0;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Sample a(1);
    {
        Sample b(2);
        Sample c(3);
    } 

    Sample d(4);

    return 0;
}
