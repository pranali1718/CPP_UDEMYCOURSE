/*
String:
1.input String
2.cout String
3.length of String
4.compare word with space

*/

#include<iostream>
using namespace std;

int main( )
{
    string a;
    string b;
    int temp;
    
    cin>>a>>b;
    cout<<"1 : "<<a<<endl<<"2 : "<<b<<endl;
    if(a.length()==b.length())
    {
        cout<<"\n in if condition len is same\n"; 
        cout<<"lenght is same"<<endl;
        for(int i=0;i<a.length();i++)
        {
            temp=0;
            if(a[i]==b[i] )
            {
                temp =1;
            }
        }
        
        if(temp == 1)
        {
            cout<<"string is same";
        }
        else
        {
            cout<<"string is not same";
        }
        
    }
    else
    {
        cout<<"\n in if condition len is not same\n"; 
        cout<<"string is not same";
    }
   
    return 0;
}
