#include <iostream>
using namespace std;
int main (){
    float volts[9]={11.95, 16.32, 12.15, 8.22, 15.98,26.22, 13.54, 6.45,17.59};
    int count=0;
    for (int i = 0; i < 9; i++)
    {
        cout<<volts[i]<<"   ";
        count++;
        if (count%3==0)
        {
            cout<<endl;
        }
    } 
    return 0;
}
