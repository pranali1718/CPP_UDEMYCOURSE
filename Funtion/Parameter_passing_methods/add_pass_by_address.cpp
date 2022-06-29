#include <iostream>
using namespace std;

int add(int *a,int *b)
{   
    cout<<*a<<" "<<*b<<endl<<"Addition is : ";
    return *a + *b;
}
int main()
{   
    int a=9,b=8;
    cout<<add(&a,&b);
    return 0;
}
