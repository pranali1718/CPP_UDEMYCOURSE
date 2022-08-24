#include <iostream>
using namespace std;

int main() 
{
    int size,sum=0;
    
    cout<<"enter size of array :";
    cin>>size;
    
    int *ip=new int[size];
    cout<<"Enter Elements : ";
    for(int i=0;i<size;i++)
    {
        cin>>ip[i];
    }
    cout<<"Entered Elemets : ";
    for(int i=0;i<size;i++)
    {
        cout<<*(ip + i)<<" ";
    }
    
    cout<<"\nSummation of entered Elemets: ";
    for(int i=0;i<size;i++)
    {
        sum=sum+ip[i];
    }
    cout<<sum;
    return 0;
}
