#include <iostream>
using namespace std;

int main()  
{
    // Define constants for the number of months, days, and temperatures
    int NUM_MONTHS = 12;
    int NUM_DAYS = 31;
    int NUM_TEMPERATURES = 3;

    // Declare a 3-dimensional array to store the temperatures
    double weather[NUM_MONTHS][NUM_DAYS][NUM_TEMPERATURES] = {0.0};

    // Prompt the user to enter temperatures for each day using nested loops
    for (int month = 0; month < NUM_MONTHS; month++) 
        {
        for (int day = 0; day < NUM_DAYS; day++)
            {
            cout << "Enter high temperature for Month " << month + 1 << ", Day " << day + 1 << ": ";
            cin >> weather[month][day][0];

            cout << "Enter low temperature for Month " << month + 1 << ", Day " << day + 1 << ": ";
            cin >> weather[month][day][1];

            // Calculate the average temperature for each day
            weather[month][day][2] = (weather[month][day][0] + weather[month][day][1]) / 2.0;
            }
        }

    int choice;
    do {
        // Display the menu and prompt the user for their choice
        cout << endl << endl;
        cout << "1. Get high and low temperature for a specific day" << endl;
        cout << "2. Get high, low, and average temperatures for a specific month" << endl;
        cout << "3. Get month and day with the highest temperature" << endl;
        cout << "4. Get month and day with the lowest temperature" << endl;
        cout << "5. Print all months' average temperatures in table format" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        int month, day;
        double maxTemp, minTemp, ltemp, htemp, average;

        switch (choice)    
            {
            case 1:
                // Get high and low temperature for a specific day
                cout << "Enter the month: ";
                cin >> month;
                cout << "Enter the day: ";
                cin >> day;
                cout << "High temperature: " << weather[month - 1][day - 1][0] << endl;
                cout << "Low temperature: " << weather[month - 1][day - 1][1] << endl;
                break;
            case 2:
                // Get high, low, and average temperatures for a specific month
                cout << "Enter the month (1-12): ";
                cin >> month;

                // Find the highest temperature for the month
                htemp = weather[month][0][0];
                for (int i = 0; i < NUM_DAYS; i++) 
                    {
                        if (weather[month][i][0] > htemp)
                            {
                                htemp = weather[month][i][0];
                            }
                    }
                cout << "High temperature: " << htemp << endl;

                // Find the lowest temperature for the month
                ltemp = weather[month][0][0];
                for (int i = 0; i < NUM_DAYS; i++)
                    {
                        if (weather[month][i][1] < ltemp)
                            {
                                ltemp = weather[month][i][1];
                            }
                    }
                cout << "Low temperature: " << ltemp << endl;

                // Calculate the average temperature for the month
                average = (htemp + ltemp) / 2;
                cout << "Average temperature: " << average << endl;
                break;
            case 3:
                // Get the month and day with the highest temperature
                maxTemp = weather[0][0][0];
                for (int m = 0; m < NUM_MONTHS; m++)
                    {
                        for (int d = 0; d < NUM_DAYS; d++)
                            {
                                if (weather[m][d][0] > maxTemp) 
                                    {
                                        maxTemp = weather[m][d][0];
                                        month = m + 1;
                                        day = d + 1;
                                    }
                             }
                     }
                cout << "The highest temperature is on Month " << month << " and day " << day << endl;
                break;
            case 4:
                // Get the month and day with the lowest temperature
                minTemp = weather[0][0][1];
                for (int m = 0; m < NUM_MONTHS; m++) 
                    {
                        for (int d = 0; d < NUM_DAYS; d++) 
                            {
                                if (weather[m][d][1] < minTemp) 
                                    {
                                        minTemp = weather[m][d][1];
                                        month =m + 1;
                                        day = d + 1;
                                    }
                            }
                     }
                cout << "The lowest temperature is on Month " << month << " and day " << day << endl;
                break;
            case 5:
                // Print all months' average temperatures in table format
                cout << "Month\tAverage Temperature" << endl;
                for (int m = 0; m < NUM_MONTHS; m++) 
                    {
                        double sum = 0.0;
                        for (int d = 0; d < NUM_DAYS; d++)
                            {
                                sum += weather[m][d][2];
                            }
                        double average = sum / NUM_DAYS;
                        cout << m + 1 << "\t" << average << endl;
                    }
                break;
            case 6:
                // Exit the program
                cout << "Exiting the program..." << endl;
                break;
            default:
                // Invalid choice
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 6);

    return 0;
}
