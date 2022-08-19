#include <iostream>
using namespace std;

int main()
{
    int a,b,*p,*q;
    cout<<"Enter Two Number : ";
    cin>>a>>b;
    
    p=&a;
    q=&b;
    
    cout<<"Addition is : "<<*p+*q;
    return 0;
}
