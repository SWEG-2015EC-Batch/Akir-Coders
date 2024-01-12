#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowelCount = 0, consonantCount = 0, digitCount = 0, specialCharCount = 0;

    for (char c : input) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        } else if (isdigit(c)) {
            digitCount++;
        } else {
            specialCharCount++;
        }
    }

    cout << "Vowel count: " << vowelCount << endl;
    cout << "Consonant count: " << consonantCount << endl;
    cout << "Digit count: " << digitCount << endl;
    cout << "Special character count: " << specialCharCount << endl;

    return 0;
}
