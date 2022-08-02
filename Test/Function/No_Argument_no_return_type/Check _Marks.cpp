/*Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
Marks        Grade
91-100         AA
81-90          AB
71-80          BB
61-70          BC
51-60          CD
41-50          DD
<=40          Fail
*/


#include<iostream>
using namespace std;

void S_Marks()
{
    int marks;
    cout<<"Enter Marks : ";
    cin>>marks;
    
    if(marks >100)
    {
        cout<<"Enter Marks Correctly";
        exit(0);
    }
    
    if(marks>=91)
    {
        cout<<"A+";
    }
    else if(marks>=81)
    {
        cout<<"A";
    }
    else if(marks>=71)
    {
        cout<<"B+";
    }
    else if(marks>=61)
    {
        cout<<"B";
    }
    else if(marks>=51)
    {
        cout<<"C+";
    }
    else if(marks>=41)
    {
        cout<<"C";
    }
    else
    {
        cout<<"Fail";
    }
    
}
int main()
{
    S_Marks();
    return 0;   
}
