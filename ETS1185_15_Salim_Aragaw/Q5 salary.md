problem analysis

input(s):Employee Name,weekly working hours,bonus rate per hour,base salary.
output(s):Employee Name,Gross Salary,Net Salary,Bonus Payment.

procedure(s): 
--> variable declartion -> that holds an input and operation results 
--> calculate the total Weekly Salary using the formula 
totalWeeklySalary = (weeklyWorkingHours * baseSalary) + (bonusRatePerHour * weeklyWorkingHours)

--> perform operation
  - calculate the Bonus Payment 
    bonusPayment = bonusRatePerHour * weeklyWorkingHours

  - calculate the Gross Salary
    grossSalary = totalWeeklySalary * 4

  - calculate the Pension Deduction
     pensionDeduction = grossSalary * 0.05

   - calculate the Tax Deduction
     taxDeduction = grossSalary * 0.15

    - calculate the Net Salary
     netSalary = grossSalary - (pensionDeduction + taxDeduction)

--> displaying Employee Name,Gross Salary,Net Salary,Bonus Payment.

algorithm in psedocode

step 1: start
step 2: read the Employee Name,weekly working hours,bonus rate per hour,base salary
step 3: totalWeeklySalary  --> (weeklyWorkingHours * baseSalary) + (bonusRatePerHour * weeklyWorkingHours)
step 4: bonusPayment--> bonusRatePerHour * weeklyWorkingHours
step 5: grossSalary --> totalWeeklySalary * 4
step 6: pensionDeduction --> grossSalary * 0.05
step 7: taxDeduction --> grossSalary * 0.15
step 8: netSalary --> grossSalary - (pensionDeduction + taxDeduction)
step 9: print (Employee Name,Gross Salary,Net Salary,Bonus Payment). 
step 10: stop

flow chart

![283946006-09264b92-09d2-4328-b4cd-9a895c88ab8b](https://github.com/SWEG-2015EC-Batch/Akir-Coders/assets/149458119/3ddd1925-9759-4652-bc8b-03b10b17b766)
