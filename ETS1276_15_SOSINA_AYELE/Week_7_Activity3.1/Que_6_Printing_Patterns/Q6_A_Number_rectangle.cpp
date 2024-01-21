// number_rectangle

#include <iostream>
using namespace std;
int main()
 {
    int count = 0,fnum,lnum;
    cout <<"Enter the first number: ";
    cin>>fnum;
    cout <<"Enter the last  number: ";
    cin>>lnum;

    for (int i = fnum; i <= lnum; i++)
    {
        cout << i << " ";
        count++;

        if (count % 10 == 0)
        {
        cout<<endl;
        }
    }

    return 0;
}

