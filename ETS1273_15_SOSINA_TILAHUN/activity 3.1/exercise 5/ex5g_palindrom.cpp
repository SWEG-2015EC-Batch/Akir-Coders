#include <iostream>
using namespace std;
int main() {
    int num, ori, rev = 0,rem;
    cout << "Enter a number: ";
    cin >> num;

    ori = num;

    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if (ori == rev) {
       cout << ori << " is a palindrome." <<endl;
    } 
    else {
       cout<<ori<<" is not a palindrome." <<endl;
    }

    return 0;
}
