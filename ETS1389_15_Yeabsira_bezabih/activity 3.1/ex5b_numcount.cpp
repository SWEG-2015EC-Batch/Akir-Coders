#include<iostream>
using namespace std;
int main()
{
    int originalnumber,numdigits;
    cout<<"enter the number: ";
    cin>>originalnumber;

     while (originalnumber > 0) {
        originalnumber /= 10;
        numdigits++;
      
}
cout<<"the number of digits is "<<numdigits;
}
