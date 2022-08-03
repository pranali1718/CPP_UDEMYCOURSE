#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char f;
    string a="Pranali";
    int b=a.length();
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='a')
        {
            a[i]='f';
            cout<<a[i];
        }
        
        else if(a[i]=='i')
        {
            a[i]='o';
            cout<<a[i];
        }
        
    }
    cout<<endl;
    cout<<a;
    return 0;
}
