#include <iostream>

int main() {
    int rows, columns;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> columns;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            if (i == 1  i == rows  j == 1 || j == columns)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
