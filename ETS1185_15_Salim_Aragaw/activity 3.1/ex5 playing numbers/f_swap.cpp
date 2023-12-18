#include <iostream>
#include <string>
using namespace std;

int main() {
    string num,swapnum;
    char fdigit,ldigit;
    cout<<"Enter a number: ";
    cin>>num;
    swapnum = num;
    if (num.length() >= 2)
     {
        fdigit = num[0];
        ldigit = num[num.length() - 1];
        swapnum[0] = ldigit;
        swapnum[num.length() - 1] = fdigit;
    }
    else
    {
        cout<<"single or invalid number";

    }
    cout<<"Number after swapping first and last digits: "<<swapnum<<endl;

    return 0;
}
