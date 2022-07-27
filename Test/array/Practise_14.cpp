
//Find the largest and smallest elements of an array.
								

#include<iostream>
using namespace std;
int main()
{
    
    int a[5]={2,5,6,8,9};
    int temp=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>temp)
        {
            temp=a[i];
        }
    }
    cout<<"Greater Number is :"<<temp<<endl;
    
    for(int i=0;i<5;i++)
    {
        if(a[i]<temp)
        {
            temp=a[i];
        }
    }
    cout<<"smallest Number is :"<<temp;
    return 0;
}

