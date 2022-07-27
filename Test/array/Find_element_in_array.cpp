#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int element;
    int key;
    cout<<"enter the array elements: ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element you want to find  : ";
    cin>>element;
    for(int i=0;i<5;i++)
    {
        if(element==a[i])
        {
            cout<<a[i]<<" is present in array";
            exit(0);
        }
    }
    cout<<element<<" is not present in Array" ;
    return 0;
}
