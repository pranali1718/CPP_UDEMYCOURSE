#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a='a';
    char *ptr;
    ptr ="Hello Affu";
    int b=strlen(ptr);
    cout<<"length of ptr : "<<strlen(ptr)<<endl;
    
    for(int i=0;i<b;i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}
