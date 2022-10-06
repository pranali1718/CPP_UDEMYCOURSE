/******************************************************************************
 * decltype Keyword
  
 * datatype of another value is same as we declare it
 * automaticallly set the data type to the value 

*******************************************************************************/
#include <iostream>
using namespace std;


void add()
{
    int x=2;
    float y=34.4;
     
    decltype(x) a =9;
    
    cout<<x;
    cout<<endl<<y;
    cout<<endl<<a;
}
int main()
{   
    add();
    return 0;
}
