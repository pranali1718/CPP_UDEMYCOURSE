#include<iostream>
using namespace std;

void mul(int &x,int &y)
{
    cout<<"MUltiplication : "<<x*y;
}

int main()
{
    int p,q;
    cout<<"Enter 2 values : ";
    cin>>p>>q;
    mul(p,q);
    return 0;
}
