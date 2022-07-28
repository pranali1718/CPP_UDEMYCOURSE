/*
Write a program to find the sum and product of all elements of an array.

*/

#include <iostream>
using namespace std;


int main()
{
    int size;
    cout<<"Enter Size of array :"<<endl;
    cin>>size;
    int a[size];
    int sum=0;
    int mul=1;
    int average=0;
    
    cout<<"Enter array Elements :";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Array Elements are : ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
        sum=sum+a[i];
        mul=mul*a[i];
        average =sum/size;
    }
    cout<<"\nSum : "<<sum<<endl;
    cout<<"Mul : "<<mul<<endl;
    cout<<"avg : "<<average;
    
}
