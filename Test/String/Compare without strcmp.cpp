
//Write a program to compare if the two strings entered by user are equal or not without using predefined String functions.


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

