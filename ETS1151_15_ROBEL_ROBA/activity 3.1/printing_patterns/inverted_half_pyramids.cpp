//program to print inverted half pyramid with row 6 using*.
#include <iostream>
using namespace std;

int main() {

    int rows = 6;

    for(int i = rows; i >= 1; --i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
