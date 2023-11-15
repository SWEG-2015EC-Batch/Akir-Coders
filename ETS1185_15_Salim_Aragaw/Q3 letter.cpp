#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
    char Letter;
    cout<<"Enter the Letter"<< endl;
    cin>>Letter;
    if (islower (Letter))
        {
            Letter = toupper(Letter);
            cout<<Letter;
        }
    else if (isupper(Letter))
		{
		Letter = tolower(Letter);
		cout<<Letter;
		}
	else 
		{
        cout << "The character " << Letter << " is not a letter."<< endl;
    	}

    return 0;
}
