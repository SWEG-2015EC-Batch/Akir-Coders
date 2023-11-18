#include<iostream>
using namespace std;
int main()
{
    float Fuel_Tank_Capacity, Fuel_Consumption, Miles_on_Full_Tank;
    cout<<"Enter The Fuel Tank Capacity of The Automobile in Gallons"<< endl;
    cin>>Fuel_Tank_Capacity;
    cout<<"Enter the Fuel Consumption in Miles per Gallon"<< endl;
    cin>>Fuel_Consumption;
    Miles_on_Full_Tank = Fuel_Consumption*Fuel_Tank_Capacity;
    cout<<"The Max Miles on Full Tank of this car is"<< endl;
    cout<<Miles_on_Full_Tank<<" Miles"<< endl;
    return 0;
}
