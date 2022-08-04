#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[]="abc";
    char b[]="powfghjk";
    int temp=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==b[i])
        {
            temp++;
        }
    }
    if(temp==strlen(a))
    {
        cout<<"Equal";
    }
    else
    {
        cout<<"Not Equal";
    }
    return 0;
}

