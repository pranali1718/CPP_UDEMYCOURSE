#include <iostream>
using namespace std;

int main()
{
    int var[3]={100,200,300};
    int *ptr[3];
    cout<<"Array Is : ";
    for(int i=0;i<3;i++)
    {
        cout<<var[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        ptr[i]=&var[i];
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr[i]<<" ";
    }
}

