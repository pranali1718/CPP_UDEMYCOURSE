/*Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers*/


#include<iostream>
using namespace std;
int main()
{
    int a[20];
    int even=0,odd=0,positive=0,negative=0;
    cout<<"Enter the array elements :";
    for(int i=0;i<20;i++)
    {
        cin>>a[i];
    }
    cout<<"elements are : ";
    for(int i=0;i<20;i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<"\n-----------------------------------------"<<endl;
    for(int i=0;i<20;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
    }
    for(int i=0;i<20;i++)
    {
        if(a[i]%2!=0)
        {
            odd++;
            //break;
        }
    }
    for(int i=0;i<20;i++)
    {
        if(a[i]>0)
        {
            positive++;
            //break;
        }
    }
    for(int i=0;i<20;i++)
    {
        if(a[i]<0)
        {
            negative++;
         //   break;
        }
    }
    cout<<"Even Number are : "<<even<<endl;
    cout<<"Odd Number are : "<<odd<<endl;
    cout<<"positive Number are : "<<positive<<endl;
    cout<<"Negavtive Numbers are : "<<negative<<endl;
    
    
    return 0;
}
