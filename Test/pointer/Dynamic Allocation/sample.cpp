#include <iostream>
using namespace std;

int main()
{
    int *p;
    
    p=new int;
    
    *p=89;
    cout<<" *p is: "<<*p<<endl;
    cout<<" address of *p is: "<<p<<endl;
    
    delete(p);
    
    cout<<" after deleting it becomes :"<<*p;

    return 0;
}
