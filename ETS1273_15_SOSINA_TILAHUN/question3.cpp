#include <iostream>
#include <ctype.h>
using namespace std;
int main() 
{
    char letter,upper,lower;

    cout << "Enter a letter: ";
    cin >> letter;
    upper = toupper(letter);
    cout << "Uppercase equivalent: " << upper <<endl;
    lower = tolower(letter);
    cout << "Lowercase equivalent: " << lower <<endl;

    return 0;
}
