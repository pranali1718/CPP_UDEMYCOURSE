#include<iostream>
using namespace std;

int main()
{
    string a;
    char b;
    int temp=1;
    
    cout<<"Enter string : ";
    cin>>a;
    cout<<"Enter char you want to find : ";
    cin>>b;
    cout<<"String : "<<a<<endl;
    cout<<"char : "<<b<<endl;
    
    for(int i=0;i<a.length();i++)
    {
        temp = 1;
        if(a[i]==b)
        {
            temp=0;
            //cout<<"present letter : "<<a[i];
        }
        
    }
    
    //cout<<"checking temp value : "<<temp<<endl;
    
    if(temp == 0)
    {
        cout <<"yes";
    }
    else
    {
        cout<<"no";
    }
   
    return 0;
}
