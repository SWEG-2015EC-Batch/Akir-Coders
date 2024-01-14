#include <iostream>
using namespace std;
int main()
{

    const int maxTokens = 10;
    string tokens[maxTokens];
    int numTokens = 0;

    string line;
    cout << "Enter a line of text: ";
    getline(cin , line);

    int i = 0;
    while (i < line.length())
    {

        while (i < line.length() && line[i] != ' ')
        {
            cout << line[i];
            i++;
        }

        cout << "\n";
        i++;

        numTokens++;
    }

    return 0;
}
