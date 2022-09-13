#include <iostream>
using namespace std;

int display(int a)
{
    if(a>=45)
        return 100;
    else
        return 10;
}

int main()
{
    int i=9;
    cout<<display(i);
    return 0;
}
