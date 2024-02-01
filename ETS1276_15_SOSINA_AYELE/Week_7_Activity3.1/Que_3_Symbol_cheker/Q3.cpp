// A program that tells whether a character entered from the keyboard is in upper case or in lower case or digit or special character.
// The program also checks if the number is even/odd and if the alphabet is vowel or consonant.

#include <iostream> // This is necessary to use input/output streams
using namespace std;

int main()
{
    char c; // Declare a variable to store the character
    cout << "Enter a character: "; // Prompt the user to enter a character
    cin >> c; // Read the character from the keyboard

    // Check if the character is an upper case letter
    if (c >= 'A' && c <= 'Z')
    {
        cout << c << " is an upper case letter." << endl;

        // Check if the letter is a vowel
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            cout << c << " is also a vowel." << endl;
        }
        else // Otherwise, it is a consonant
        {
            cout << c << " is also a consonant." << endl;
        }
    }
    // Check if the character is a lower case letter
    else if (c >= 'a' && c <= 'z')
    {
        cout << c << " is a lower case letter." << endl;

        // Check if the letter is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            cout << c << " is also a vowel." << endl;
        }
        else // Otherwise, it is a consonant
        {
            cout << c << " is also a consonant." << endl;
        }
    }
    // Check if the character is a digit
    else if (c >= '0' && c <= '9')
    {
        cout << c << " is a digit." << endl;

        // Check if the digit is even or odd
        if (c % 2 == 0) // If the remainder of dividing by 2 is zero, it is even
        {
            cout << c << " is also an even number." << endl;
        }
        else // Otherwise, it is odd
        {
            cout << c << " is also an odd number." << endl;
        }
    }
    // Otherwise, the character is a special character
    else
    {
        cout << c << " is a special character." << endl;
    }

    return 0; // End the program
}
