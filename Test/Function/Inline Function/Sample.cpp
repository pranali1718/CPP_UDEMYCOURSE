/**********************************************************************************
                            Inline Function
                            
1.inline function need the KEYWORD inline before ffunction defination.
2.inline executes fastly but it needs small steps  of code
3.if function includes
    loops   switch statemnts    Static Varibles     recursion   goto_statments
    then function is not inline
***********************************************************************************/
#include<iostream>
using namespace std;

inline int fun(int x,int y)
{
    return x+y;
}

int main()
{
    cout<<fun(2,7);
}
