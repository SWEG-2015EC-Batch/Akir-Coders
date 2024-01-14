#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++;
    }

    int maxFreq = 0;
    char maxChar;

    int minFreq = str.length();
    char minChar;

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxChar = (char)i;
        }

        if (freq[i] > 0 && freq[i] < minFreq)
        {
            minFreq = freq[i];
            minChar = (char)i;
        }
    }

    cout << "Max Freq Char: " << maxChar << endl;
    cout << "Min Freq Char: " << minChar << endl;

    return 0;
}
