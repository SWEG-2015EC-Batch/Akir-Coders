#include <iostream>
using namespace std;
int main() {
    int number, originalNumber, remainder, sum = 0;
   
    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;


    while (originalNumber != 0) {
        int factorial = 1;
        remainder = originalNumber % 10;

      
        for (int i = 1; i <= remainder; i++) {
            factorial *= i;
        }

        sum += factorial;
        originalNumber /= 10;
    }

  
    if (sum == number) {
        cout << number << " is a Strong number." << endl;
    } else {
        cout << number << " is not a Strong number." << endl;
    }

    return 0;
}
