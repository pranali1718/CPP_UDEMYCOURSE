//find the maximum number

#include<iostream>
using namespace std;

int Max(int,int ,int );


int main()
{
    cout<<Max(7,10,5);
    return 0;
}
int Max(int a,int b,int c)
{

    if(a>b && a>c)
    {
            return a;
    }
    else if(b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
