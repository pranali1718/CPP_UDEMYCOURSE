/*
code for addtion array ,average of array ,min of array and max of array

*/
#include<iostream>
using namespace std;

int main()
{
    int a[9]={10,20, 3, 40, 50, 60, 70, 80, 90};
    int sum=0,avg=0;
    int max=a[0];
    int min=a[0];
    int temp=0;
    cout<<"Array is :";
    for(int i=0;i<9;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n_____________________________________\n";
    cout<<"Addition :";
    for(int i=0;i<9;i++)
    {
        sum=sum+a[i];
        avg=sum/9;
        
        if(a[i]>=max)
        {
            max=a[i];
        }
        
        if(a[i]<=min)
        {
            min=a[i];
        }
    }
    if(temp==1)
    {
        cout<<min;
    }
    
    cout<<sum<<endl;
    cout<<"_____________________________________\n";
    cout<<"Average : "<<avg<<endl;
    cout<<"_____________________________________\n";
    cout<<"Max:"<<max<<endl;
    cout<<"_____________________________________\n";
    cout<<"Min:"<<min;


}
