#include <iostream>
using namespace std;
int main()
{

    char friends[4][4] = {
        {' ', '*', ' ', '*'},
        {'*', ' ', '*', ' '},
        {' ', '*', ' ', '*'},
        {'*', ' ', '*', ' '}};

    int count = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (friends[i][j] == '*')
            {
                count++;
            }
        }
    }
    for ( int i = 0; i < 4; ++i){
        for (int j = 0; j < 4; ++j){
            cout << friends[i][j] << " " << " | ";
        }
        cout << endl;
    }

    cout << "Number of friend pairs: " << count << endl;

    return 0;
}
