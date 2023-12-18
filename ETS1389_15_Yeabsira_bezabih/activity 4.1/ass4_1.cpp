#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    double sum = 0.0,sumSquared = 0.0,num,mean,variance,standardDeviation;

    cout<<"Enter the number of elements: ";
    cin>>n;
    cout << "Enter "<< n <<" numbers:\n";
    for (int i = 1; i <= n; ++i)
     {
        cout<<"Enter number "<<i<<":";
        cin >> num;
        sum += num;
        sumSquared += num * num;
    }
    mean = sum / n;
    variance = (sumSquared / n) - (mean * mean);
    standardDeviation = sqrt(variance);
    cout<<"Mean: "<<mean<<endl;
    cout << "Standard deviation: "<<standardDeviation <<endl;

    return 0;
}