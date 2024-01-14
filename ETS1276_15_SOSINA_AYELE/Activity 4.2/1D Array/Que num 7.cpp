#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int num[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    cout << "\nEven numbers in reverse order: ";
    for (int i = n - 1; i >= 0; i--)
    {
        if (num[i] % 2 == 0)
        {
            cout << num[i] << " ";
        }
    }

    return 0;
}
