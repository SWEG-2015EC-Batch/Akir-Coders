#include <iostream>
using namespace std;
int main() {
    int number, originalNumber, remainder, result = 0;
    
    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

   
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }

   
    if (result == number) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
