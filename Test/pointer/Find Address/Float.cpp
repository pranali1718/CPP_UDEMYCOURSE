#include <iostream>
using namespace std;


int main()
{   
    float a,*ip;
    ip=&a;
    cout<<"ip : "<<ip<<endl;
    cout<<"int : "<<( int *)ip<<endl;
    cout<<"void : "<<( void *)ip<<endl;
    cout<<"float : "<<( float *)ip<<endl;
    cout<<"char : "<<( char *)ip<<endl;		//cant use this
    return 0;
}
