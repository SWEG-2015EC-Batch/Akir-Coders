#include <iostream>
using namespace std;
int main() {
    int number,tempNumber,frequency,currentDigit;
  
    cout << "Enter an integer: ";
    cin >> number;

    // Count the frequency of each digit
    for (int digit = 0; digit < 10; ++digit) {
        tempNumber = number;
        frequency = 0;

        while (tempNumber != 0) {
            currentDigit = tempNumber % 10;
            if (currentDigit == digit) {
                frequency++;
            }
            tempNumber /= 10;
        }

        if (frequency > 0) {
            cout << digit << "\t" << frequency << endl;
        }
    }
    return 0;
}
