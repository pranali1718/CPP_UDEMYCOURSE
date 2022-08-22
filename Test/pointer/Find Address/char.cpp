/*
not able to find address of charater data_type using direct methods 
it need void *,int* or float * for finding the address 
*/


#include <iostream>
using namespace std;

int main()
{   
    char a='p',*ip;
    ip=&a;
   // cout<<"ip : "<<&a<<endl;
    cout<<"int : "<<( int *)ip<<endl;
    cout<<"void : "<<( void *)ip<<endl;
    cout<<"float : "<<( float *)ip<<endl;
   // cout<<"char : "<<( char *)ip<<endl;
    return 0;
}
