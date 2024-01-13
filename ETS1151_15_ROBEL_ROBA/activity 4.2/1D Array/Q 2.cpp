#include <iostream>
using namespace std;
int main()
{
    int temp[8];
    int total = 0;

    for (int i = 0; i < 8; ++i)
    {
        cout << "Enter integer number " << i + 1 << ": ";
        cin >> temp[i];

        total += temp[i];
    }
    cout << "The list of integers = ";
    for (int i = 0; i < 8; ++i)
    {
        cout << temp[i] << " ";
    }

    cout << "\n"
              << "The Average of the integers = " << double(total) / 8;

    return 0;
}
