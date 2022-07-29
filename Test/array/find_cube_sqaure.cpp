/*Write a Program to print the square and cube of each element of the 2d array or matrix.*/

#include<iostream>
using namespace std;

int main()
{
    int size=0;
    cout<<"Enter size of array : \n";
    cin>>size;
    int a[size],b,c;
    cout<<"Enter Element of array :";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
                                                                        
        cout<<c<<" ";
    cout<<"array Element are : ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"sqaure of elemts of above matrix :\n";
    for(int i=0;i<size;i++)
    {
        b=a[i]*a[i];
        cout<<b<<" ";
    }
    cout<<"\nCube of the Element of above matrix :\n";
    for(int i=0;i<size;i++)
    {
        c=a[i]*a[i]*a[i];
        cout<<c<<" ";
    }
    
} 
