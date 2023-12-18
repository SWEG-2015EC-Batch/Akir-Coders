#include<iostream>
using namespace std;
int main()
{
    char c;
    int n1,n2,n3,exit;
      do
    {
    cout<<"enter the first number: ";
    cin>>n1;
      cout<<"enter the operation: ";
    cin>>c;
      cout<<"enter the second number: ";
    cin>>n2;
  
    
    switch (c)
    {
    case '+':
        n3=n1+n2;
        cout<<"The sum of the numbers is "<<n3<<endl;
         break;
     case '-':
        n3=n1-n2;
        cout<<"The difference of the numbers is "<<n3<<endl;
        break;
     case '*':
        n3=n1*n2;
        cout<<"The produce of the two numbers is "<<n3<<endl;
        break;
     case '/':
        n3=n1/n2;
        cout<<"The quoitent of the two numbers is "<<n3<<endl;
        break;
     case '%':
        n3=n1%n2;
        cout<<"The reminder of the two number is "<<n3<<endl;
        break;
    
    default:
        cout<<"invalid operator";
        break;
    }
    cout<<"do youn want to continue? yes[any number] no[0]:";
    cin>>exit;
    } while (exit!=0);
    
   
    
return 0;
} 
