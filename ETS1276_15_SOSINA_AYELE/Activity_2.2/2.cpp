#include <iostream>
using namespace std;
int main()
{
float tank_capacity,milepgallon,nonrefullingmiles;
cout<<"Enter full tank capacity in gallons:";
cin>>tank_capacity;
cout<<"Enter the miles driven in a gallon:";
cin>>milepgallon;
nonrefullingmiles=tank_capacity*milepgallon;
cout<<"This car can be driven "<<nonrefullingmiles<<" miles with out refulling";
return 0;

}
