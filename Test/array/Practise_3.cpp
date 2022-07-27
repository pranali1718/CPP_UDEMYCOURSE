/*
Write a program to find the sum and product of all elements of an array.

*/


#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int sum=0,mul=1;
    
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"array  is :";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
        mul=mul*a[i];
    }
    cout<<"Addition of all array element is : "<<sum<<endl;
    cout<<"Multiplcation of all array element is : "<<mul<<endl;
    return 0;
}
