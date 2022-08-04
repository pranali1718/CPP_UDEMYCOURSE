#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[]={'z','f','z','\0'};
    char b[]="gfo";
    
    int c=strcmp(a,b);
    cout<<c<<endl;
    if(c==0)
    {
        cout<<"s";
    }
    cout<< a<<endl;
    return 0;
}
