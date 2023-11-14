#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   long double x,y,z;
   cout<<"Enter the base number:";
   cin>>x;
   cout<<"Enter the power number:";
   cin>>y;
   z=pow(x,y);
   cout<<"The "<<x<<" power "<<y<<" is "<<z;
    return 0;
} 
