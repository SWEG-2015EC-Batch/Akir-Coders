#include <iostream>
using namespace std;

int main() {
     int mark;
    cout << "Enter the total mark: ";
    cin >> mark;

    string scoreLevel;
    if (mark >= 80) {
        scoreLevel = "Excellent";
    } else if (mark >= 60) {
        scoreLevel = "Very Good";
    } else if (mark >= 50) {
        scoreLevel = "Fair";
    } else if (mark >= 40) {
        scoreLevel = "Poor";
    } else {
        scoreLevel = "Fail";
    }

    cout << "-------------------------" << endl;
    cout << "| Mark\t| Score Level\t|" << endl;
    cout << "-------------------------" << endl;
    cout << "| " << mark << "\t| " << scoreLevel << "\t\t|" << endl;
    cout << "-------------------------" << endl;

    return 0;
}
