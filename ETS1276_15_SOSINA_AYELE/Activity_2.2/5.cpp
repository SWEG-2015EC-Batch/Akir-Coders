#include <iostream>
using namespace std;

int main()
 {
    string employeeName;
    double weeklyWorkingHours, bonusRate, baseSalary,pensionDeduction,bonusPayment,grossSalary,taxDeduction,netSalary ;
    cout << "Enter employee name: ";
    cin>> employeeName;
    cout << "Enter weekly working hours: ";
    cin >> weeklyWorkingHours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;
    cout << "Enter base salary: ";
    cin >> baseSalary;
    grossSalary = weeklyWorkingHours * baseSalary;
    bonusPayment = weeklyWorkingHours * bonusRate;
    pensionDeduction = grossSalary * 0.05;
    taxDeduction = grossSalary * 0.15;
    netSalary = grossSalary - (pensionDeduction + taxDeduction)+bonusPayment;

   
    cout << "Employee Name: " << employeeName <<endl;
    cout << "Gross Salary: $" << grossSalary <<endl;
    cout << "Bonus Payment: $" << bonusPayment <<endl;
    cout << "Net Salary: $" << netSalary <<endl;
   

    return 0;
}
