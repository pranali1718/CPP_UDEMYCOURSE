#include<iostream>
using namespace std;

inline int setNum()             // define an inline function using the keyword "inline"

{
    return 10;                  // definition of inline function 
}

int main()

{
    cout << "The inline function returned: " << setNum()  ;
    return 0 ;
}

