#include <iostream>
#include <math.h>

int main()
{

    int choice, number;

    do
    {
        std::cout << "\nMenu" << std::endl;
        std::cout << "1. Reverse Number\t";
        std::cout << "\t"
                  << "2. Count Digits" << std::endl;
        std::cout << "3. Sum of Digits\t";
        std::cout << "\t"
                  << "4. Product of Even Digits" << std::endl;
        std::cout << "5. First and Last Digits Sum\t";
        std::cout << "6. Swap First and Last Digits" << std::endl;
        std::cout << "7. Check Palindrome\t";
        std::cout << "\t"
                  << "8. Print Frequency of Digits" << std::endl;
        std::cout << "9. Check Armstrong Number\t";
        std::cout << "10. Check Strong Number" << std::endl;
        std::cout << "11. Check Perfect Number\t";
        std::cout << "0. Exit" << std::endl;

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 11)
        {
            std::cout << "Enter a number: ";
            std::cin >> number;
        }

        if (choice == 1)
        {
            int reversed = 0;
            int num = number;
            while (num > 0)
            {
                int lastDigit = num % 10;
                reversed = reversed * 10 + lastDigit;
                num /= 10;
            }
            std::cout << "Reversed Number: " << reversed << std::endl;
        }
        else if (choice == 2)
        {
            int count = 0;
            int num = number;
            while (num > 0)
            {
                count++;
                num /= 10;
            }
            std::cout << "Number of digits: " << count << std::endl;
        }
        else if (choice == 3)
        {
            int sum = 0;
            int num = number;
            while (num > 0)
            {
                sum += num % 10;
                num /= 10;
            }
            std::cout << "Sum of digits: " << sum << std::endl;
        }
        else if (choice == 4)
        {
            int prod = 1;
            int num = number;
            while (num > 0)
            {
                int digit = num % 10;
                if (digit % 2 == 0)
                {
                    prod *= digit;
                }
                num /= 10;
            }
            std::cout << "Product of even digits: " << prod << std::endl;
        }
        else if (choice == 5)
        {
            int lastDigit = number % 10;

            int num = number;
            while (num >= 10)
            {
                num /= 10;
            }
            int firstDigit = num;

            std::cout << "First Digit: " << firstDigit << std::endl;
            std::cout << "Last Digit: " << lastDigit << std::endl;
            std::cout << "Sum: " << (firstDigit + lastDigit) << std::endl;
        }
        else if (choice == 6)
        {
            int lastDigit = number % 10;

            int num = number;
            while (num >= 10)
            {
                num /= 10;
            }
            int firstDigit = num;

            int remainingDigits = number - firstDigit * pow(10, log10(number));

            int swapped = lastDigit * pow(10, log10(number)) + remainingDigits * 10 + firstDigit;

            std::cout << "Number after swapping: " << swapped << std::endl;
        }
        else if (choice == 7)
        {
            int num = number;
            int reversed = 0;
            while (num > 0)
            {
                int lastDigit = num % 10;
                reversed = reversed * 10 + lastDigit;
                num /= 10;
            }
            if (number == reversed)
            {
                std::cout << number << " is a palindrome" << std::endl;
            }
            else
            {std::cout << number << " is not a palindrome" << std::endl;
            }
        }
        else if (choice == 8)
        {
            int num = number;
            int freq[10] = {0};
            while (num > 0)
            {
                int digit = num % 10;
                freq[digit]++;
                num /= 10;
            }
            std::cout << "Digit\tFrequency" << std::endl;
            for (int i = 0; i < 10; i++)
            {
                std::cout << i << "\t" << freq[i] << std::endl;
            }
        }
        else if (choice == 9)
        {
            int num = number;
            int digits = 0;
            int temp = num;
            while (temp > 0)
            {
                digits++;
                temp /= 10;
            }

            temp = num;
            int sum = 0;
            while (temp > 0)
            {
                int digit = temp % 10;
                sum += pow(digit, digits);
                temp /= 10;
            }

            if (num == sum)
            {
                std::cout << number << " is an Armstrong number" << std::endl;
            }
            else
            {
                std::cout << number << " is not an Armstrong number" << std::endl;
            }
        }

        else if (choice == 10)
        {
            int num = number;
            int sum = 0;
            int temp = num;
            while (temp > 0)
            {
                int digit = temp % 10;
                int fact = 1;
                for (int i = 1; i <= digit; i++)
                {
                    fact *= i;
                }
                sum += fact;
                temp /= 10;
            }

            if (sum == num)
            {
                std::cout << number << " is a Strong number" << std::endl;
            }
            else
            {
                std::cout << number << " is not a Strong number" << std::endl;
            }
        }

        else if (choice == 11)
        {
            int num = number;
            int sum = 0;

            for (int i = 1; i <= num / 2; i++)
            {
                if (num % i == 0)
                    sum += i;
            }

            if (sum == num)
            {
                std::cout << number << " is a Perfect number" << std::endl;
            }
            else
            {
                std::cout << number << " is not a Perfect number" << std::endl;
            }
        }
    } while (choice != 0);

    return 0;
}
