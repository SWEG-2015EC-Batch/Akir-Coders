1. Problem Description
- Program to calculate net salary based on inputs for gross salary, working hours etc.

2. Problem Analysis

- Input: gross salary, bonus rate, working hours
- Process: Calculate pension, income tax, net salary
- Output: Net salary 

3. Algorithm

    1. Start 
    2. Initialize variables  
    - gross_salary, bonus_rate, working_hours
    3. Read input   
    - gross_salary, bonus_rate, working_hours
    4. Calculate pension
    5. Check gross salary 
    - Select income tax rate
    6. Calculate income tax
    7. Check working hours
    - If >40, calculate overtime
    8. Calculate bonus
    9. Calculate net salary 
    - gross - pension - tax + bonus
    10. Print net salary
    11. End

4. Algorithm (Flowchart)
## Mermaid
```mermaid
graph TD;
    A[Start] --> B{Get Inputs}
    B --> C{Check invalid} 
    C -- Valid --> D{Get tax rate}
    D --> E{Get overtime}
    E --> F[Calculate bonus]
    F --> G[Calculate net salary]
    G --> H[Print net salary]
    
    C -- Invalid --> I[Invalid input]  
    I --> J[End] 
    
    D -- <200 --> K[0%]
    D -- <600 --> L[10%] 
    D -- <1200 --> M[15%]
    D -- <2000 --> N[20%]
    D -- <3500 --> O[25%]
    D -- >3500 --> P[30%]

    H --> J
```
