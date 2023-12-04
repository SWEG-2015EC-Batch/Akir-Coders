//Body Mass Index Calculator
#include<iostream>
using namespace std;
int main()
{
    float Height, Weight, BMI;
    string gender, male, female;
    cout<<"Please Enter your Height"<< endl;
    cin>>Height;
    cout<<"Please Enter your Weight"<< endl;
    cin>>Weight;
    cout<<"Enter your gender say male or female"<<endl;
    cin>>gender;
    BMI = Weight/(Height*Height);
    cout<<"Your BMI is: "<<BMI<<endl;
    
    if(gender=="female"){
    
    if (BMI < 18.5) {
        cout << "female Underweight" << std::endl;
    } else if (BMI >= 18.5 && BMI <= 24) {
        cout << "female Normal Weight" << std::endl;
    } else if (BMI > 24 && BMI <= 30) {
        cout << "female Overweight" <<endl;
    } else {
        cout << "female Obesity" <<endl;
    }
    }
  
  if (gender=="male")  {
if (BMI < 18.5) {
        cout << "male Underweight" <<endl;
    } else if (BMI >= 18.5 && BMI <= 24) {
        cout << "male Normal Weight" <<endl;
    } else if (BMI > 24 && BMI <= 30) {
        cout << "male Overweight" <<endl;
    } else {
        cout << "male Obesity" <<endl;
    }
  }

    return 0;
}
