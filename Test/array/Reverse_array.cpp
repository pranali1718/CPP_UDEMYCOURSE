/*
Write a program to check if elements of an array are same or not it read from front or back. E.g.-
2	3	15	15	3	2
*/
#include<iostream>
using namespace std;

int main()
{
    int a[5]={2,3,4,5,6};
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n_____________________________________\n";
    for(int i=4;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    
}
