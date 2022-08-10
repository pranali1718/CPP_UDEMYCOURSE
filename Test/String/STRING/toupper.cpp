#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string a;
    cout<<"enter string : ";
    getline(cin,a);
    int b=a.length();
    cout<<b<<endl;
    
    for(int i=0;i<b;i++)
    {
        cout<<char(toupper(a[i]));
    }
    cout<<endl;
    for(int i=0;i<b;i++)
    {
        //putchar(tolower(a[i]));
        cout<<char(tolower(a[i]));
    }
    cout<<endl;
    for(int i=0;i<b;i++)
    {
        if(i==4 || i==5)
        {
            a[i]=toupper(a[i]);
        }
    }
    cout<<a;
    return 0;
}


