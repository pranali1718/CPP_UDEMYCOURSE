#include <iostream>
using namespace std;

int swap(int *a,int *b)
{   
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int main()
{   
    int a=9,b=8;
    cout<<"before : "<<a<<" "<<b;
    swap(&a,&b);
    cout<<endl<<"after : "<<a<<" "<<b;

    return 0;
}
