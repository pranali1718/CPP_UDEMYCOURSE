
//Define a program to find out whether a given number is even or odd.//


#include<iostream>
using namespace std;

int odd_even(int x)
{
    if(x%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    return 0;
}
int main()
{
    int a;
    cout<<"Enter No :";
    cin>>a;
    odd_even(a);
    return 0;   
}

