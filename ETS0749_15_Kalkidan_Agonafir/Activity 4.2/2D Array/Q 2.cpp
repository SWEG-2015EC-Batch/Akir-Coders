#include <iostream>
using namespace std;
int main()
{
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Array elements: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    
    cout << "Row elements multiplication: " << endl;
    for (int i = 0; i < rows; i++)
    {
        int product = 1;
        for (int j = 0; j < cols; j++)
        {
            product *= arr[i][j];
        }
        cout << product << endl;
    }
       cout << "Column elements sum: " << endl;
    for (int i = 0; i < cols; i++)
    {
        int sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }

    return 0;
}
