#include <iostream>
using namespace std;

int main() {
    unsigned short SomeArray[5][4];  

    
    for (int i = 0; i < 5; i++)      
        for (int j = 0; j < 4; j++)  
            SomeArray[i][j] = 0;     

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cout << SomeArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
