#include <iostream>
using namespace std;
int main()
 {
    int transmissionRate = 960;
    int fileSize,timeInSeconds,days; 
    cout << "Enter the file size in bytes: ";
    cin >> fileSize;
    timeInSeconds = fileSize/transmissionRate;
     days = timeInSeconds / (86400);
     

    cout << "Time to send the file: " << days <<"days"<<endl;

    return 0;
}
