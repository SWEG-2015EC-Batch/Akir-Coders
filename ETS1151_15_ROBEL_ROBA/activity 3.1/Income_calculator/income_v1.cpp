//This program calculates the net salary of an employee based on inputs provided by the user.
#include <iostream>

int main(){

    const float PENSION = 0.07;
    int overtime = 0, gross_salary, working_hour;
    int pension, net_salary, tax_rate, income_tax, bonus, bonus_rate;

    std::cout << "Enter your gross salary: ";
    std::cin >> gross_salary;
    std::cout << "Enter the over time bonus rate per hour: ";
    std::cin >> bonus_rate;
    std::cout << "Enter your working hour: ";
    std::cin >> working_hour;
    std::cout << "Enter tax rate: ";
    std::cin >> tax_rate;

    pension = gross_salary * PENSION;
    income_tax = gross_salary * tax_rate/100;

    if (working_hour > 40){
        overtime = working_hour - 40;
        bonus = overtime * bonus_rate;
        net_salary = (gross_salary - pension - income_tax) + bonus;
        std::cout << "Your net salary = " << net_salary << std::endl;
    }
    net_salary = gross_salary - pension - income_tax;

    return 0;
}
