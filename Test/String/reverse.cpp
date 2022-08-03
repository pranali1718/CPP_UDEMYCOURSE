#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string a="Pranali";
    int b=a.length();
    for(int i=0;i<a.length();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=a.length();i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
