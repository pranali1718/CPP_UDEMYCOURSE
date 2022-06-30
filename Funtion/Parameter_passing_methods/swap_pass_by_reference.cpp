
#include<iostream>
using namespace std;
int swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return 0;
}
int main()
{
    int x=10, y=20;
    swap(x,y);
    cout<<x <<" "<<y;
    return 0;
}
