#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char program1[] = "Game of Thrones";
    char program2[20];

    strcpy(program2, "Vikings");

    cout << "My favorite television programs are: " << endl;
    cout << "1. " << program1 << endl;
    cout << "2. " << program2 << endl;
    return 0;
}
