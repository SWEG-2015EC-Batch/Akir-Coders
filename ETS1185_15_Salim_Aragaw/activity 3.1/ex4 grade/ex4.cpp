#include<iostream>
using namespace std;
int main()
{
 int test , quiz , project, assignment , finalexam , total;
 cout<<"enter your test mark from 15%: ";
 cin>>test;
 cout<<"enter your quiz mark from 5%: ";
 cin>>quiz;
 cout<<"enter your project mark from 20%: ";
 cin>>project;
 cout<<"enter your assignment mark from 10%: ";
 cin>>assignment;
 cout<<"enter your final exam mark from 50%: ";
 cin>>finalexam;
 
    total = test + quiz + project + assignment + finalexam;
    if((total<0)||(total>100))
    {
        cout<<"invald input";
        
    }
    else
    {
    cout<<"your total mark is "<<total;

    }
    
if (total>=90)
{
    cout<<"your grade is A+";
}
else if (total>=80)
{
    cout<<"your grade is A";
}
else if (total>=75)
{
    cout<<"your grade is B+";
}

else if (total>=60)
{
    cout<<"your grade is B";
}

else if (total>=55)
{
    cout<<"your grade is C+";
}

else if (total>=45)
{
    cout<<"your grade is C";
}

else if (total>=30)
{
    cout<<"your grade is D";
}
else if (total<30)
{
    cout<<"your grade is F";
}
else
{
  cout<<"unknown grade";
  
}
return 0;
}
