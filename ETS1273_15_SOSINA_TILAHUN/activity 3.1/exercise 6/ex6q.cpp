#include <iostream>
using namespace std;
int main() {
    int width, height;


    cout<<"Enter the width of the rectangle: ";
    cin>>width;

    cout << "Enter the height of the rectangle: ";
    cin >> height;

    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= width; ++j) {
            if (i == 1 || i == height || j == 1 || j == width) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout<<endl;
    }

    return 0;
}
