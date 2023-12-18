#include<iostream>
using namespace std;
 int main()
 {
    int num,reminder,esum=1;
    cout<<"enter the number: ";
    cin >>num;
    while (num!=0)
    {
        reminder = num % 10 ;
        if (reminder%2==0)
        {
            esum *= reminder;
        }
        reminder=0;
        num /=10;
    }
  
   cout<<"the product of the even digits are "<<esum;
   return 0;
 }
