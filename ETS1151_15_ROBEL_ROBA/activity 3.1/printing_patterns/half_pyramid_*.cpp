//pogram to print half pyramid with row 6 using *.
#include <iostream>
using namespace std;

int main() {

    int rows = 6;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
