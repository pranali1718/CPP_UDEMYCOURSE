/******************************************************************************
 * Auto Keyword
  
 * automatically compiler decides which type of value it is .
*******************************************************************************/
#include <iostream>
using namespace std;

void add()
{
    float x;
    int y;
    cout<<"Enter The value x & y : ";
    cin>>x>>y;
    auto z=x+y;
    cout<<"\nadd : "<<z;
}
int main()
{   
    add();
    return 0;
}
