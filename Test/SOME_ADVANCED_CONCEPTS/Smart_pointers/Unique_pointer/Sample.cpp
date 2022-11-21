#include<iostream>
#include<memory>

using namespace std;

int main()
{
    unique_ptr <int> ptr (new int(10));
    int x=15;
    if(x == 15)
    {
        cout<<"value of x is :"<<x;
    }
    return 0;
}
