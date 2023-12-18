#include<iostream>
using namespace std;
int main(){
    int count;
    cout << "Enter the height: ";
    cin >> count;
    for (int i = count; i >=1; --i)
    {
    for (int j = 0; j < i; j++)
    {
        cout<< "*";
    }
    cout<< endl;
    }
    return 0;
}
