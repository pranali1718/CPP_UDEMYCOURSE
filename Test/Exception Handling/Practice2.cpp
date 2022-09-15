/******************************************************************************
                    Exception Handling in Function
*******************************************************************************/
#include <iostream>
using namespace std;

void Division(int x,int y)
{
    if(y==0)
        throw 1;
    else
    {
        cout<<x/y;
    }
}

int main()
{
    int a=10,b=0,c;

    try
    {
        if(b==0)
            throw 1;
        else
        {
            cout<<a/b;
        }
    }
    catch(int p)
    {
        cout<<"Not divisible by Zero ";
    }

    return 0;
}
