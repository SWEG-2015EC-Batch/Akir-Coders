1. Problem Description 
    - write a program that acts as a simple calculator that provides arithmetic capabilities to the user. 
    The program should accept two integers and an operator from the user
2. Problem Analysis

Input:
    op: Character to store arithmetic operator entered by user
    num1, num2: Integers to store the two operands entered by user
Process:
    Read operand and operator from the user
    Validate operator
    Perform arithmetic operations based on the operator
        If +, add num1 and num2
        If -, subtract num2 from num1
        If *, multiply num1 and num2
        If /, divide num1 by num2
        If %, compute remainder when num1 is divided by num2
    Handle divide by 0 error case
Output:
    If invalid operator, print error
    If divide by 0, print undefined
    Otherwise, print the result of the arithmetic operation on num1 and num2

3. Algorithm 
    1. Start
    2. Declare variables
        op (character to store operator)
        num1 (integer to store first number)
        num2 (integer to store second number)
    3. Print message asking user to enter operator (+, -, *, /, %)
    4. Read user input into op
    5. Print message asking user to enter first number
    6.  Read user input into num1
    7. Print message asking user to enter second number
    8. Read user input into num2
    9. Use switch case on op variable
        - If +, print sum of num1 and num2
        - If -, print difference of num1 and num2
        - If *, print product of num1 and num2
        - If /, print quotient of num1 and num2
        - If %, print remainder of num1 and num2
        - If invalid operator, print error message
    10. Print message asking user to enter 0 to exit or any other key to continue
    11. Read user input into op
    12. If op is 0, go to step 13, otherwise go back to step 3
    13. Stop

Algortihm(Flowchart)
## Mermaid
```mermaid
graph TD;
id1([Start]);
id2[/Read op/];
id3{is users input + , - , * , / , % ?};
id4[/Read num1 and num2/];
id5(switch case on op variable);
id6(case + );
id7(case - );
id8(case * );
id9(case / );
id10(case % );
id11(num1 + num2);
id12(num1 - num2);
id13(num1 * num2);
id14(num1/num2);
id15(num1 % num2);
id16{is num2 == 0?};
id17[/Print result + message/];
id18{continue or terminate?};
id19([End]);
id20[/Print invalid operator/];
id21[/Print it is undefined/];
id1-->id2;
id2-->id3;
id3--yes-->id4;
id3--no-->id20;
id4-->id5;
id5-->id6;
id5-->id7;
id5-->id8;
id5-->id9;
id5-->id10;
id6-->id11;
id7-->id12;
id8-->id13;
id9-->id16;
id10-->id15;
id16--no-->id14;
id16--yes-->id21;
id21-->id18;
id11-->id17;
id12-->id17;
id13-->id17;
id14-->id17;
id15-->id17;
id17-->id18;
id20-->id18
id18--continue-->id2;
id18--terminate-->id19;

```

```
