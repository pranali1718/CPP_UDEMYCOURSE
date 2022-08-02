//A person is elligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is elligible to vote.


#include<iostream>
using namespace std;

void Vote()
{
    int age;
    cout<<"Enter Age : ";
    cin>>age;
    
    if(age>=18)
    {
        cout<<"Eligible for voting";
    }
    else
    {
        cout<<"Not Eligible for voting";
    } 
}

int main()
{
    Vote();
    return 0;   
}
