#include <iostream>
using namespace std;

int main()
{
    int a[10];
    cout<<"enter the array elements: ";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Array is : ";
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
