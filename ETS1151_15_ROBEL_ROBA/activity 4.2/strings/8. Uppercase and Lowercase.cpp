#include <iostream>
#include <cctype>
using namespace std;
int main()
{

    string str;
    cout << "Enter a text: ";
    getline(cin, str);

    cout << "All Uppercase: ";
    for (int i = 0; i < str.length(); ++i)
    {
        str[i] = toupper(str[i]);
        cout << str[i];
    }
    cout << "\nAll Lowercase: ";
    for (int i = 0; i < str.length(); ++i)
    {
        str[i] = tolower(str[i]);
        cout << str[i];
    }
return 0;
}
