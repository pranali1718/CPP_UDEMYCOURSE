#include <iostream>
using namespace std;

class Base
{
    public:
    int *a;                                         //declaring int pointer
    Base()
    {
        int size;                                   //declaring size
        cout<<"Enter Size : ";
        cin>>size;
        a=new int[size];                            //dynamically allocation
            
        cout<<"Enter ele : ";
        
        for(int i=0;i<size;i++)                     //taking input
        {
            cin>>a[i];
        }
        cout<<"Elements entered by you: ";          
        for(int i=0;i<size;i++)                     //displaying input
        {
            cout<<a[i]<<" ";
        }
    }
    
};

int main()
{
    Base b;                                         //constructor calling
    return 0;
}
