#include <iostream>
using namespace std;
int main() 
{
    int num, fdigit, ldigit ,sum;
    cout << "Enter a number: ";
    cin >> num;

    fdigit = num;
    while (fdigit >= 10) {
        fdigit /= 10;
    }

    ldigit = num % 10;
    sum = fdigit + ldigit;

    cout << "First digit: "<<fdigit<<endl;
    cout << "Last digit: "<<ldigit<<endl;
    cout<< "Sum of the first and last digit: "<<sum<<endl;

    return 0;
}
