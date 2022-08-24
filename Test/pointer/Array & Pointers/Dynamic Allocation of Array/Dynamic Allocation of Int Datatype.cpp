#include <iostream>
using namespace std;

int main() 
{
    int size;
    cout<<"Enter Size : ";
    cin>>size;
    
    int *ch =new int[size];                       //allocation of int data type
    
    cout<<"Enter Integers :";
    for(int i=0;i<size;i++)
    {
        cin>>ch[i];                                 //entering Integers
    }
    
    cout<<"Entered Integers :";
    for(int i=0;i<size;i++)
    {
        cout<<ch[i]<<" ";                           //displying Integers
    }
    
    return 0;
}
