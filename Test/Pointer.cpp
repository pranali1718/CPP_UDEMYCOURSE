#include<iostream>
using namespace std;

int main( )
{
    char c='h';
    char* pointVar;
   
    pointVar = &c;
    *pointVar ='c';

    cout << *pointVar << endl;
    cout<<c;
    return 0;
}
