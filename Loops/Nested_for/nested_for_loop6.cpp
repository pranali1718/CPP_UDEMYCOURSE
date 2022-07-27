/*find minimum number*/

#include <iostream>
using namespace std;

int main()
{
    int a[5]={2,67,56,33,21};
    int temp=a[0];
    
    for(int i=0;i<5;i++)
    {
        if(temp>=a[i])
        {
            temp=a[i];
        }
    
    }cout<<"min : "<<temp;
    return 0;
}
