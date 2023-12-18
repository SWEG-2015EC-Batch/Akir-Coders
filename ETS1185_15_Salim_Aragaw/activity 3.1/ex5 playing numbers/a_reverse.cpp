#include<iostream>
using namespace std;
int main()
{
    
int temp,num,reverse;

cout<<"enter the number: ";
cin>>num;
while(num>0)
{
    temp = num % 10;
    reverse = (reverse*10)+temp;
    num /=10;
}
cout<<"your reversed number is "<<reverse<<endl;

}
