#include<iostream>
using namespace std;
int main()
{
    float height,weight,BMI;
    cout<<"HEIGHT in meter and WEIGHT  in kilograms"<<endl;
    cout<<"Enter your height:";
    cin>>height;
    cout<<"Enter your weight:";
    cin>>weight;
    BMI=(weight/(height*height));
    cout<<BMI;
    
    return 0;
}
