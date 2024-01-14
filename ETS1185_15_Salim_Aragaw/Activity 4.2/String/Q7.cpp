#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;

    cout << "Enter a name: ";
    cin >> name;

    int n = name.length();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (name[j] > name[j + 1]) {
                char temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }

    cout << "Sorted characters: ";
    for (char c : name) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
