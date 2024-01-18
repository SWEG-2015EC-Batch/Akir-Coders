Define NUM_MONTHS as 12
Define NUM_DAYS as 31
Define NUM_TEMPERATURES as 3

Declare a 3-dimensional array called weather with dimensions [NUM_MONTHS][NUM_DAYS][NUM_TEMPERATURES]

For each month from 0 to NUM_MONTHS - 1
    For each day from 0 to NUM_DAYS - 1
        Prompt the user to enter the high temperature for the current month and day
        Read and store the high temperature in weather[month][day][0]
        Prompt the user to enter the low temperature for the current month and day
        Read and store the low temperature in weather[month][day][1]
        Calculate and store the average temperature as (high temperature + low temperature) / 2 in weather[month][day][2]

Repeat until the user chooses to exit:
    Display a menu to the user with the following options:
        1. Get high and low temperature for a specific day
        2. Get high, low, and average temperatures for a specific month
        3. Get month and day with the highest temperature
        4. Get month and day with the lowest temperature
        5. Print all months' average temperatures in table format
        6. Exit

    Read the user's choice

    Switch based on the user's choice:
        Case 1:
            Prompt the user to enter a month
            Prompt the user to enter a day
            Display the high temperature for the specified month and day from weather array
            Display the low temperature for the specified month and day from weather array
        Case 2:
            Prompt the user to enter a month
            Display the high temperature for the specified month and the first day from weather array
            Display the low temperature for the specified month and the first day from weather array
            Display the average temperature for the specified month and the first day from weather array
        Case 3:
            Set maxTemp as the first high temperature in the weather array
            For each month from 0 to NUM_MONTHS - 1
                For each day from 0 to NUM_DAYS - 1
                    If the high temperature in weather[month][day][0] is greater than maxTemp
                        Set maxTemp as the high temperature in weather[month][day][0]
                        Set month as the current month
                        Set day as the current day
            Display the month and day with the highest temperature
        Case 4:
            Set minTemp as the first low temperature in the weather array
            For each month from 0 to NUM_MONTHS - 1
                For each day from 0 to NUM_DAYS - 1
                    If the low temperature in weather[month][day][1] is less than minTemp
                        Set minTemp as the low temperature in weather[month][day][1]
                        Set month as the current month
                        Set day as the current day
            Display the month and day with the lowest temperature
        Case 5:
            Display a table header "Month\tAverage Temperature"
            For each month from 0 to NUM_MONTHS - 1
                Set sum as 0.0
                For each day from 0 to NUM_DAYS - 1
                    Add the average temperature in weather[month][day][2] to sum
                Calculate the average temperature as sum / NUM_DAYS
                Display the month number and average temperature in tabular format
        Case 6:
            Display "Exiting the program..."

End Program