// program to 180 degree rotated half pyramid with number
#include <iostream>
using namespace std;
int main(){
int side,j(1),k(1),space,spacecheker(1);
cout<<"Program to construct inverted half triangle\nside: ";
cin >> side;
space=side;
for(int i=1; i<=side;i++){
    while (space>spacecheker){
        cout <<"   ";
        spacecheker++;
    }
    spacecheker=1;
    space--;
    k=j;
    while(j>0){
        cout << j<<"  ";
        j--;
    }
    j=k+1;
    cout << endl;
}
}
