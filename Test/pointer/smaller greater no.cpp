/*Write a program to find out the greatest and the smallest among three numbers using pointers.*/

#include <iostream>
using namespace std;
            


int main()
{
    int a,b,c;
    int *p,*q,*r;
    
    cout<<"Enter Three Number : "<<endl;
    cin>>a>>b>>c;
    
    p=&a;
    q=&b;
    r=&c;
    
    if(*p>*q && *p>*r)
    {
        cout<<"greater is: "<<*p;
    }
    else if(*q>*r)
    {
        cout<<"Greater is : "<<*q;
    }
    else
    {
        cout<<"Greater is  : "<<*r;
    }
    cout<<endl;
    if(*p<*q && *p<*r)
    {
        cout<<"Smaller is : "<<*p;
    }
    else if(*q<*r)
    {
        cout<<"Smaller is : "<<*q;
    }
    else
    {
        cout<<"Smaller is : "<<*r;
    }
    return 0;
}
