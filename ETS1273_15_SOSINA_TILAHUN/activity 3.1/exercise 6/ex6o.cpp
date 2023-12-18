#include <iostream>
using namespace std;
int main() {
   string str = "abcde";
    for (int i = 0; i < str.length(); ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << str[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
