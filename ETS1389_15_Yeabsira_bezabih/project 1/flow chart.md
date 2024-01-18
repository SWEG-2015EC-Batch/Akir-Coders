## Mermaid
```mermaid
graph LR
A[Start] --> B[Initialize Constants]
B --> C[Initialize Array]
C --> D[Iterate Over Months]
D --> E[Iterate Over Days]
E --> F[Get High Temperature]
F --> G[Get Low Temperature]
G --> H[Calculate Average Temperature]
H --> E
E --> I[Check User's Choice]
I -->|1| J[Get High and Low Temperature for a Specific Day]
I -->|2| K[Get High, Low, and Average Temperatures for a Specific Month]
I -->|3| L[Get Month and Day with the Highest Temperature]
I -->|4| M[Get Month and Day with the Lowest Temperature]
I -->|5| N[Print All Months' Average Temperatures]
I -->|6| O[Exit]
J --> P[Display High and Low Temperature]
P --> I
K --> Q[Display High, Low, and Average Temperatures]
Q --> I
L --> R[Find Month and Day with Highest Temperature]
R --> S[Display Month and Day with Highest Temperature]
S --> I
M --> T[Find Month and Day with Lowest Temperature]
T --> U[Display Month and Day with Lowest Temperature]
U --> I
N --> V[Print All Months' Average Temperatures]
V --> I
O --> W[Exit the Program]
W --> X[End]
