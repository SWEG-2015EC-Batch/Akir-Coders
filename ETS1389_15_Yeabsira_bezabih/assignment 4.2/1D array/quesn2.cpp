#include <iostream>
using namespace std;
int main (){
    int temp[8];
    int sum=0,count=0,avg;
    for (int i = 0; i < 8; i++)
    {
        int j = i+1;
        cout<< "Enter number "<<j<<":";
        cin>>temp[i];
        sum+=temp[i];
        count++;

    }
    avg = sum/count;
    cout<<"The sum of tne numbers is "<<sum<<endl;
    cout<<"The average of the numbers is "<<avg;
   


}