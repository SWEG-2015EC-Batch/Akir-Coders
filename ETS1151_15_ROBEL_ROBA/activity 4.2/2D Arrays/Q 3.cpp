#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int testScore, assignmentScore, quizScore, projectScore, finalScore;
    cout << "Enter the test score: ";
    cin >> testScore;
    cout << "Enter the assignment score: ";
    cin >> assignmentScore;
    cout << "Enter the quiz score: ";
    cin >> quizScore;
    cout << "Enter the project score: ";
    cin >> projectScore;
    cout << "Enter the final score: ";
    cin >> finalScore;
    int totalMark = testScore + assignmentScore + quizScore + projectScore + finalScore;
    string scoreLevel;
    if (totalMark >= 80) {
        scoreLevel = "Excellent";
    } else if (totalMark >= 60) {
        scoreLevel = "Very Good";
    } else if (totalMark >= 50) {
        scoreLevel = "Fair";
    } else if (totalMark >= 40) {
        scoreLevel = "Poor";
    } else {
        scoreLevel = "Fail";
    }

    cout << "----------------------------------------" << endl;
    cout << "| Component     | Score Level | Mark    |" << endl;
    cout << "----------------------------------------" << endl;
    cout << "| Test          | " << setw(11) << scoreLevel << " | " << setw(7) << testScore << " |" << endl;
    cout << "| Assignment    | " << setw(11) << scoreLevel << " | " << setw(7) << assignmentScore << " |" << endl;
    cout << "| Quiz          | " << setw(11) << scoreLevel << " | " << setw(7) << quizScore << " |" << endl;
    cout << "| Project       | " << setw(11) << scoreLevel << " | " << setw(7) << projectScore << " |" << endl;
    cout << "| Final         | " << setw(11) << scoreLevel << " | " << setw(7) << finalScore << " |" << endl;
    cout << "----------------------------------------" << endl;
    cout << "| Total         |              | " << setw(7) << totalMark << " |" << endl;
    cout << "----------------------------------------" << endl;
    
    return 0;
}
