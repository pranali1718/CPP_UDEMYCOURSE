#include <iostream>
using namespace std;

int main()
{
    int a=5,*p;
    
    p=new int;
    
    *p=89;
    cout<<" *p is: "<<*p<<endl;
    cout<<" address of *p is: "<<p;
    

    return 0;
}
