/******************************************************************************
 * distructor
 * 
*******************************************************************************/

#include <iostream>
using namespace std;

class Demo
{
    public:
    
    Demo()
    {
        cout<<"I am Demo Constuctor\n";
    }
    
    ~Demo()
    {
        cout<<"I am Demo Distrcutor\n";
    }
    
};

int main()
{
    Demo d;
    return 0;
}
