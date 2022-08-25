#include <iostream>
using namespace std;

class Base
{
    private:
        int x,b;
        
    public:
        void fun()
        {
            cout<<"Function 1 \n";
        }
        
        void fun(int x)
        {
            cout<<"Function 2 "<<x;
        }
};

int main()
{
    Base b,*ptr;
    
    ptr=&b;
    
    ptr->fun();
    ptr->fun(2);
    return 0;
}
