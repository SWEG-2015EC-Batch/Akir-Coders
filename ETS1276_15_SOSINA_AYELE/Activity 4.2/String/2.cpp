#include <iostream>
#include <string>
using namespace std;
int main()

{
    string word;
    cout << "Enter a word: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        word[i] = tolower(word[i]);
    }

    for (int i = 0; i < word.length() / 2; i++)
    {
        if (word[i] != word[word.length() - i - 1])
        {
            cout << word << " is not a palindrome" << endl;
            return 0;
        }
    }
    cout << word << " is a palindrome" << endl;
    return 0;
}
