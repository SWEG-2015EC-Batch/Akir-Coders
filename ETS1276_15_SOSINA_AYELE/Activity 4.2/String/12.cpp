#include <iostream>
using namespace std;
int main()
{

    char answers[10] = {'B', 'C', 'B', 'B', 'D', 'A', 'D', 'C', 'A', 'D'};
    char studentAnswers[10];

    cout << "Enter your answers (A/B/C/D): ";

    for (int i = 0; i < 10; i++)
    {
        cin >> studentAnswers[i];
        studentAnswers[i] = toupper(studentAnswers[i]);
    }

    int score = 0;
    for (int i = 0; i < 10; i++)
    {
        if (answers[i] ==studentAnswers[i])
        {
            score++;
        }
    }
    cout << "Your score is: " << score << "/10" << endl;

    cout << "Your answers: ";
    for (int i = 0; i < 10; i++)
    {
        cout << studentAnswers[i] << " ";
    }

    cout << endl;

    return 0;
}
