#include <iostream>
using namespace std;
int main ()
{
    int A[]={4,8,-6,-9,5,2,7};
    int min =A[0];
    
    for(int i=0;i<7;i++)
    {    
        if(min>A[i])
        {
            min=A[i];
        }
    }
    cout<<"Minimum Number is:"<<min;
    
    return 0;
}
