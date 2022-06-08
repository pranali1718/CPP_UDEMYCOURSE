

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter Three Numbers :";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<" greater no is: "<<a;
    }
    else
    {
        if(b>c)
        {
            cout<<"greater no is: "<<b;
        }
        else
        {
            cout<<"greater no is: "<<c;
        }
    }
}
