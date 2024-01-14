#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char pass[] = "password"; 

    char input[10];
    cout << "Enter the password: ";
    cin.getline(input, 10);

    if (strcmp(input, pass) == 0) {
        cout << "Access granted!" << endl;
    } else {
       cout << "Access denied!" << endl;
    }

    return 0;
}
