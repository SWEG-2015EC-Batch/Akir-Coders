#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string input;
    cout << "Enter a string: ";
    getline(std::cin, input);
    string result;
     for (char c : input) {
        if (std::isalpha(c)) {
            result += c;
        }
    }

    cout << "String with non-alphabet characters removed: " << result << endl;

    return 0;
}
