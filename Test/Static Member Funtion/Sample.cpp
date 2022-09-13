/******************************************************************************
                                Static Member Function
*******************************************************************************/
        
#include <iostream>
using namespace std;
void fun()
{
    static int a=0;
    cout<<"A :"<<a<<endl;
    a++;
}
int main()
{
    for(int i=0;i<2;i++)
    {
        fun();
    }
    return 0;
}
