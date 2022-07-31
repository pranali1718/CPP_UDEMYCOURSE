/*
Take size
print array
positive 
Negative 
Maximum
Minimum

*/

#include <iostream>
using namespace std;

int main()
{
    int n,element;
    
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    int max=a[0],min=a[0];
    cout<<"\nEnter array Elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array Elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Positive Number are : ";
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"Negative Number are : ";
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"Even Number are : ";
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    
    cout<<"Odd Number are : ";
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    
    
    for(int i=1;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    cout<<"Maximum Element is : "<<max;
    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
        }
    }
    cout<<"Minimum Element is : "<<min;
    cout<<endl;
    
    int temp=0;
    cout<<"Enter Element You want to find : ";
    cin>>element;
    for(int i=0;i<n;i++)
    {
        if(a[i]==element)
        {
            element=a[i];
            temp=1;
        }
    }
    if(temp==1)
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"element found ";
    }
    
    
    return 0;
}
