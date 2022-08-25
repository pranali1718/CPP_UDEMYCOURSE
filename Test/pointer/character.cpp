#include<iostream>
#include<string>
using namespace std;

void fun(int* p,char *x )
{
    cout<<"Int Pointer: "<<*p<<" \nchar Pointer: "<<x;
}

int main()
{
    int a=7;
    char *l="Pranali";
    fun(&a,l);
    
    return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------------------------
    
#include<iostream>
#include<string>
using namespace std;

void fun(int* p,char x[] )
{
    cout<<"Int Pointer: "<<*p<<" \nchar Pointer: "<<x;
}

int main()
{
    int a=7;
    char l[]="Pranali";
    fun(&a,l);
    
    return 0;
}
