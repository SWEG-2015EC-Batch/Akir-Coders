#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<string> names;
    string name;

    cout << "Enter names (one name per line). Enter 'stop' to finish:\n";

    while (true) {
        getline(cin, name);
        if (name == "stop") {
            break;
        }
        names.push_back(name);
    }
    sort(names.begin(), names.end());

    cout << "\nNames in alphabetical order:\n";
    for (const string& n : names) {
        cout << n << endl;
    }

    return 0;
}
