#include<iostream>
using namespace std;

int main()
{
    float gross_salary, worked_hours,income_tax_rate;
    float over_time_rate,pension,income_tax,net_salary,over_time_payment;
    cout<<"enter gross salary: ";
    cin>>gross_salary;
     cout<<"enter worked hours: ";
    cin>>worked_hours;
     cout<<"enter over time rate: ";
    cin>>over_time_rate;
    pension = gross_salary*0.07;
  if (gross_salary>=200)
    {
        income_tax_rate==1;
        income_tax=gross_salary*income_tax_rate;
    }
    else if ((gross_salary>200)&&(gross_salary<=600))
    {
        income_tax_rate==0.1;
        income_tax=gross_salary*income_tax_rate;
    }
    else if ((gross_salary>600)&&(gross_salary<=1200))
    {
        income_tax_rate==0.15;
        income_tax=gross_salary*income_tax_rate;
    }
      else if ((gross_salary>1200)&&(gross_salary<=2000))
    {
        income_tax_rate==0.2;
        income_tax=gross_salary*income_tax_rate;
    }
      else if ((gross_salary>2000)&&(gross_salary<=3500))
    {
        income_tax_rate==0.25;
        income_tax=gross_salary*income_tax_rate;
    }
      else if (gross_salary>3500)
    {
        income_tax_rate==0.3;
        income_tax=gross_salary*income_tax_rate;
    }
    else
    {
       cout<<"invalid input";
    }
    
    if(worked_hours>40)
    {
        over_time_payment=(worked_hours-40)*over_time_rate;
    }
    else if (worked_hours<=40)
    {
        over_time_payment=0;
    }
    else
    {
        cout<<"invalid input";
    }

    net_salary=(gross_salary-pension-income_tax)+over_time_payment;
    cout<<"your net salary is "<<net_salary;
   
    return 0;
} 
