#include <iostream>
using namespace std;

int main() 
{
    char character;
    cout << "Enter a character: ";
    cin >> character;

    if (character >= 'A' && character <= 'Z') {
        cout << "Uppercase letter" << endl;
        if (character == 'A'  character == 'E'  character == 'I'  character == 'O'  character == 'U')
            cout << "It's a vowel" << endl;
        else
            cout << "It's a consonant" << endl;
    }
    else if (character >= 'a' && character <= 'z') {
        cout << "Lowercase letter" << endl;
        if (character == 'a'  character == 'e'  character == 'i'  character == 'o'  character == 'u')
            cout << "It's a vowel" << endl;
        else
            cout << "It's a consonant" << endl;
    }
    else if (character >= '0' && character <= '9') {
        cout << "Digit" << endl;
        int num = character - '0';
        if (num % 2 == 0)
            cout << "It's an even number" << endl;
        else
            cout << "It's an odd number" << endl;
    } 
    else {
        cout << "Special character" << endl;
    }


}
