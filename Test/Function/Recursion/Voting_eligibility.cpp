#include<iostream>
using namespace std;

void Vote()
{
    int age;
    cout<<"Enter Age : ";
    cin>>age;
    
    if(age <= 0)
    {
        cout<<"Enter Age Correctly ";
        exit(0);
    }
    else
    {
        
        if(age>=18)
        {
            cout<<"Eligible for voting\n";
        }
        else
        {
            cout<<"Not Eligible for voting\n";
        }
        Vote();
    }
}

int main()
{
    Vote();
    return 0;   
}
