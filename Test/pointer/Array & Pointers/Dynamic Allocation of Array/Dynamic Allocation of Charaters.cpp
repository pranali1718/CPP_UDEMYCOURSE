#include <iostream>
using namespace std;

int main() 
{
    int size;
    cout<<"Enter Size : ";
    cin>>size;
    
    char *ch =new char[size];                       //allocation of char data type
    
    cout<<"Enter charaters :";
    for(int i=0;i<size;i++)
    {
        cin>>ch[i];                                 //entering charaters
    }
    
    cout<<"Entered charcters :";
    for(int i=0;i<size;i++)
    {
        cout<<ch[i]<<" ";                           //displying charcters
    }
    
    return 0;
}
