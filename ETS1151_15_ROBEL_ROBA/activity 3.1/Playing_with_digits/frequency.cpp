#include <iostream>
#include <map>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    std::map<int, int> digitFrequency;

    while (number != 0) {
        int digit = number % 10;
        digitFrequency[digit]++;
        number /= 10;
    }

    cout << "Digit\tFrequency" <<endl;
    for (const auto& pair : digitFrequency) {
      cout << pair.first << "\t" << pair.second << endl;
    }

    return 0;
}
