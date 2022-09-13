#include <iostream>
using namespace std;

void display(int a,int b,int c,int d,int e)
{
    int sum=a+b+c+d+e;
    cout<<"Sum is :" <<sum;
    
    int avg=sum/5;
    cout<<"\nAvg is :"<< avg;
}

int main()
{
    int a,b,c,d,e;
    cout<<"Enter 5 Intergers : ";
    cin>>a>>b>>c>>d>>e;
    display(a,b,c,d,e);
    return 0;
}
