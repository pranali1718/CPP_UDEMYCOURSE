#include <iostream>
using namespace std;

int main() 
{
    int size;
    cout<<"Enter Size : ";
    cin>>size;
    
    string *ch =new string[size];                       //allocation of String data type
    
    cout<<"Enter String:";
    for(int i=0;i<size;i++)
    {
        cin>>ch[i];                                 //entering String
    }
    
    cout<<"Entered String:";
    for(int i=0;i<size;i++)
    {
        cout<<ch[i]<<" ";                           //displying String
    }
    
    return 0;
}
