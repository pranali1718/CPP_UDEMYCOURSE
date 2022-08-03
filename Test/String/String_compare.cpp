#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[]={"Pranali"};
    char b[]={"Pranali"};
    
    int c=strcmp(a,b);
    
    if(c==0)
    {
        cout<<"Same ";
    }
    else
    {
        cout<<"not";
    }
    return 0;
}
