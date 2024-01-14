#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 2;

int main()
{
    int first[ROWS][COLS];
    int second[ROWS][COLS];
    int sum[ROWS][COLS];

    cout << "First Array";

    for (int i = 0; i < ROWS; ++i)
    {
        cout << "\nEnter the " << i + 1 << "st row \n";
        for (int j = 0; j < COLS; ++j)
        {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> first[i][j];
        }
    }
    cout << endl;
    cout << "Second Array";
    for (int i = 0; i < ROWS; ++i)
    {
        cout << "\nEnter the " << i + 1 << "st row \n";
        for (int j = 0; j < COLS; ++j)
        {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> second[i][j];
        }
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {

            sum[i][j] = first[i][j] + second[i][j];
        }
    }

    cout << "Result array:" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
