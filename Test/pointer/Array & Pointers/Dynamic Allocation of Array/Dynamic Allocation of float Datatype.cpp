#include <iostream>
using namespace std;

int main() 
{
    int size;
    cout<<"Enter Size : ";
    cin>>size;
    
    float *ch =new float[size];                       //allocation of float data type
    
    cout<<"Enter Floating Point Numbers :";
    for(int i=0;i<size;i++)
    {
        cin>>ch[i];                                 //entering Floating Point Numbers
    }
    
    cout<<"Entered Floating Point Numbers :";
    for(int i=0;i<size;i++)
    {
        cout<<ch[i]<<" ";                           //displying Floating Point Numbers
    }
    
    return 0;
}
