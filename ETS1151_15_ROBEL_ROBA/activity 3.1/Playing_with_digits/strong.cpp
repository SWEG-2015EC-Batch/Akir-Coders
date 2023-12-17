#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

bool isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isStrongNumber(num)) {
        std::cout << num << " is a strong number." << std::endl;
    } else {
        std::cout << num << " is not a strong number." << std::endl;
    }

    return 0;
}
