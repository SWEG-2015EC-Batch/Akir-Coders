#include <iostream>
using namespace std;
int main() {
    int count = 0;
    

    for (char letter = 'A'; letter <= 'X'; ++letter) {
        cout << letter << " ";
        count++;

        if (count == 6) {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}
