
#include <iostream>
using namespace std;

int main()
{
    int a[5]={10000,80,60,800,889};
    int temp=a[0];
    
    for(int i=0;i<5;i++)
    {
        if(temp<=a[i])
        {
            temp=a[i];
        }
    }
    cout<<"Temp :"<<temp;
    return 0;
}
