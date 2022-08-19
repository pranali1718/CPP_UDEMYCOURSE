/* Write a program to store 5 elements in an array and print the elements using pointer.
 
 here i store elements in array using pointer *ptr[i]
 */

#include <iostream>
using namespace std;

int main()
{
    int *ptr[5];
    int a[5];
    cout<<"Enter Elements : ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<5;i++)
    {
        ptr[i]=&a[i];
    }
    
    for(int i=0;i<5;i++)
    {
        cout<<*ptr[i]<<" ";
    }
    return 0;
}
