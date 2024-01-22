#include <iostream> 
using namespace std; 
int main() 
{ 
    string alphabet[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"}; 
    int n;
    cout<<"How many letter do you want, enter (1-26): ";
    cin>>n;
if (n>=1)
{
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < i; j++) 
        { 
            cout <<" "; 
        } 
        for (int j = 0; j < n - i; j++) 
        { 
            cout << alphabet[j]; 
        } 
        for (int j = n - i - 2; j >= 0; j--) 
        { 
            cout << alphabet[j]; 
        } 
        cout << endl;
    } 
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < i; j++) 
        {
            cout << " "; 
        } 
        for (int j = 0; j < n - i; j++)
        { 
           cout << alphabet[j]; 
        } 
        for (int j = n - i - 2; j >= 0; j--) 
        { 
            cout << alphabet[j];
        }
        cout <<endl;
    }
}
else
{
    cout<<"Error message... ";
}
 return 0; 
}
