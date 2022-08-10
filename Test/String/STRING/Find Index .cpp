#include <iostream>
using namespace std;

int main()
{   
    string a=" I am Pranali ";
    char key;
    int temp=0;
    cout<<"Array is : ";
    for(int i=0;i<20;i++)
    {
        cout<<a[i];
    }
    cout<<"\nEnter word you want to find : ";
    cin>>key;
    for(int i=0;i<20;i++)
    {
        if(a[i]==key)
        {
            
            cout<<"found at :"<<i;
            temp=1;
        }
    }
    
    if(temp==0)
        {
            cout<<"not found";
        }
    return 0;
}
