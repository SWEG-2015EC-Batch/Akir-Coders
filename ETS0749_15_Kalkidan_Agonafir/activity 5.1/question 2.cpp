#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
    int numb;
    cout << "enter number of students to calculate bmi : ";
    cin >> numb;
    double** arr = new double *[numb];
    string* name = new string [numb];
    for (int i = 0; i < numb; i++) {
        arr[i] = new double[3];
    }

    for (int i = 0; i < numb; i++) {
        cout << "Enter" << i + 1 << "st person name: ";
        cin >> name[i];
        for (int j = 0; j < 3; j++) {
         
            if (j == 0)
            {
                cout << "Enter height of "<<name[i]<<": ";
                cin >> arr[i][j];

            }
            else if (j == 1) {
                cout << "Enter weight of " << name[i]<<": ";
                cin >> arr[i][j];

            }
            else if (j == 2) {
                arr[i][2] = arr[i][1] / pow(arr[i][0],2);
            }
        }
    }

    for (int i = 0; i < numb; i++) {
        cout << name[i]<<"\t";
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < numb; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] name;
    
return 0;
}
