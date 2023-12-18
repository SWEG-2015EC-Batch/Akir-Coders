#include<iostream>
using namespace std;
int main()
{
    int num , numsum, digit;
    cout<<"enter the number: ";
    cin>>num;
     
    while (num != 0)
     {
        digit = num % 10;
        numsum +=digit;
        num /= 10;
    }
    cout<<"sum of the number is "<<numsum;

    
    return 0;
}
