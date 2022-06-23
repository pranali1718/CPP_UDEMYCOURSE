#include<iostream>
using namespace std;

int add(int , int);

int main()
{
    int x,y;
    cout<<"Enter two Number:";
    cin>>x>>y;
    cout<<add(x,y);
}

int add(int x,int y)
{
    return x+y;
}
