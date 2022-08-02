//Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.//


#include<iostream>
using namespace std;

int x,y,z,max,min;
void Maximum()
{
    if(x>y &&x>z)
    {
        cout<<"\nMaximum No is :"<<x;
    }
    else if(y>z)
    {
        cout<<"\nMaximum No is :"<<y;
    }
    else
    {
        cout<<"\nMaximum No is :"<<z;
    }
}

void Minimum()
{
    if(x<y &&x<z)
    {
        cout<<"\nMinimum No is :"<<x;
    }
    else if(y<z)
    {
        cout<<"\nMinimum No is :"<<y;
    }
    else
    {
        cout<<"\nMinimum No is :"<<z;
    }
}
int main()
{
    cout<<"Enter Three Number : ";
    cin>>x>>y>>z;
    Minimum();
    Maximum();
}

