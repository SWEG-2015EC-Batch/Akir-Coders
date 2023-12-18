#include <iostream>
using namespace std;
int main() {
    int number, sum = 0;
  
    cout << "Enter a number: ";
    cin >> number;

  
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        cout << number << " is a Perfect number." << endl;
    } else {
        cout << number << " is not a Perfect number." << endl;
    }

    return 0;
}
