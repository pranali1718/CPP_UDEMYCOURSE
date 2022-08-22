#include<iostream>
using namespace std;

void add(int x,int y)
{
    cout<<"addition is : "<<x+y;
}
int main()
{
    int x,y;
    cout<<"Enter No : ";
    cin>>x>>y;
    
    add(x,y);
}
