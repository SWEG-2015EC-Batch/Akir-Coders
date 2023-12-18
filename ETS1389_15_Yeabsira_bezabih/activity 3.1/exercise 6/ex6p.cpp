#include <iostream>
using namespace std;
int main()
{
int height ,width;
cout<<"enter width: ";
cin>>width;
cout<<"enter height: ";
cin>>height;
for (int i = 0; i < height; i++)
{
    for (int j = 0; j < width; j++)
    {
        cout<<"*";
    }
    cout<<endl;
    
}


}
