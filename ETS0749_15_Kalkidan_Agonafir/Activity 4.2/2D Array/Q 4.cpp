#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

int main()
{

    int arr[ROWS][COLS];
    int evenSum = 0;

    cout << "Enter " << ROWS * COLS << " array elements: \n";
    for (int i = 0; i < ROWS; i++)
    {
        cout << "\nEnter row " << i + 1 << " elements with space between each number: ";
        for (int j = 0; j < COLS; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                evenSum += arr[i][j];
            }
        }
    }

    cout << "\nArray elements: \n";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                cout << "*\t";
            }
            else
            {
                cout << arr[i][j] << "\t";
            }
        }
        cout << "\n";
    }

    cout << "\nSum of even elements: " << evenSum;

    return 0;
}
