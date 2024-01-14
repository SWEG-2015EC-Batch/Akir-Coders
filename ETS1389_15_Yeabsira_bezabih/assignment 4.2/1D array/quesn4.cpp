#include <iostream>
using namespace std;
int main (){
    int nr,nc;
    cout<<"enter the number of row: ";
    cin>>nr;
    cout<<"enter the  number of column: ";
    cin>>nc;
    int first[nr][nc];
    int second[nr][nc];

    cout<<"Enter the elements of the first array"<<endl;
    for (int  i = 0; i < nr; i++)
    {   
        int k =i+1;
     
        for (int j = 0; j < nc; j++)
        {
            int l = j+1;
            cout<<"Enter element of row "<<k<<" column "<<l<<": " ;
            cin>>first[i][j];
        }
        
    }
     cout<<"Enter the elements of the second array"<<endl;
     for (int  m = 0; m < nr; m++)
    {   
        int o = m +1;
        for (int n = 0; n < nc; n++)
        {
            int p = n+1;
            cout<<"Enter element of row "<<o<<" column "<<p<<": " ;
            cin>>second[m][n];
        }
        
    }
    int sum[nr][nc];
   
    for (int q = 0; q < nr; q++)
    {
       for (int r = 0; r < nc; r++)
       {
        sum[q][r] = first[q][r] + second[q][r];
       }
       
       
       
    }
     
    cout<<"element\t"<<"first array\t"<<"second array"<<"\tsum"<<endl;
    for (int g = 0; g < nc; g++)
    { 

     for (int h = 0; h < nr; h++)
     {
        cout<<g<<h<<"   \t"<<first[g][h]<<"\t\t"<<second[g][h]<<"\t\t"<<sum[g][h]<<endl;
     }
            
    }   




}