//find the index of the element in string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i=0,temp=0;
    string a= "refrigerator";
    int b=a.length();
    cout<<"Lenght of string : "<<b<<endl;
    char key;
    int p=0;
    cout<<"Enter Key Element : ";
    cin>>key;
    for(i=0;i<b;i++)
    {
        if(a[i]==key)
        {
            p=i;
            temp++;
        }
         
    }
    if(temp==1)
    {
        cout<<"Element is Present "<<endl;
        cout<<"ELement present at: "<<p<<endl;
    }
    else
    {
        cout<<"Element not Present ";
    }
    
    
    
    return 0;
}
