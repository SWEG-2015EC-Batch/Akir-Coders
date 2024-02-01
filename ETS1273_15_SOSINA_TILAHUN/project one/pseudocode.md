Start the program 

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
                6. Exit the program

    Read the user's choice

    Switch based on the user's choice:
        Case 1:
            Prompt the user to enter a month
            Prompt the user to enter a day
            Display the high temperature for the specified month and day from weather array
            Display the low temperature for the specified month and day from weather array
            break
        case 2:
            Prompt the user to enter a month
            Set htemp as temperature of the first day in the month
                Iterate through each day in the month
                    If the temperature of the current day is higher than htemp
                        Update htemp with the temperature of the current day
            Set ltemp as temperature of the first day in the month
                Iterate through each day in the month
                    If the temperature of the current day is lower than ltemp
                        Update ltemp with the temperature of the current day
            Set sum as 0
                Iterate through each day in the month
                    Add the temperature of the current day to sum
                    Set average as sum divided by the number of days in the month

            Output "High temperature: " + htemp
            Output "Low temperature: " + ltemp
            Output "Average temperature: " + average
            break
        Case 3:
            Set maxTemp as the first high temperature in the weather array
            For each month from 0 to NUM_MONTHS - 1
                For each day from 0 to NUM_DAYS - 1
                    If the high temperature in weather[month][day][0] is greater than maxTemp
                        Set maxTemp as the high temperature in weather[month][day][0]
                        Set month as the current month
                        Set day as the current day
            Display the month and day with the highest temperature
            break
        Case 4:
            Set minTemp as the first low temperature in the weather array
            For each month from 0 to NUM_MONTHS - 1
                For each day from 0 to NUM_DAYS - 1
                    If the low temperature in weather[month][day][1] is less than minTemp
                        Set minTemp as the low temperature in weather[month][day][1]
                        Set month as the current month
                        Set day as the current day
            Display the month and day with the lowest temperature
            break
        Case 5:
            Display a table header "Month\tAverage Temperature"
            For each month from 0 to NUM_MONTHS - 1
                Set sum as 0.0
                For each day from 0 to NUM_DAYS - 1
                    Add the average temperature in weather[month][day][2] to sum
                    Calculate the average temperature as sum / NUM_DAYS
            Display the month number and average temperature in tabular format
            break
        Case 6:
            Display "Exiting the program..."
        default:
            Display an error message that the user has entered an invalid option

End Program
