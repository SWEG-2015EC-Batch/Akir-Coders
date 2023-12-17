#include <iostream>
using namespace std;
int main() {
    int num1, num2, exit;
    char op;
do
{
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    int result;


    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator!"<<endl;
            return 0;
    }

    cout << "Result: " << result<< endl;
  cout<<"do you want to continue \n yes[1] no[0]:";
  cin>>exit;
} while (exit!=0);
    return 0;
}
