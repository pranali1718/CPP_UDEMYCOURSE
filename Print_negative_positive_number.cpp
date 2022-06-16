#include <iostream>
using namespace std;
int main ()
{
    int A[]={4,8,-6,-9,5,2,7,-8,-3,78,-90};
    int pos =0;
    int neg =0;
    int B[10];
    int C[10];
    for(int i=0;i<11;i++)
    {    
        if(A[i]<=0)
        {
            B[neg]=A[i];
            neg++;
        }
        else
        {
            C[pos]=A[i];
            pos++;
        }
    }
    cout<<"Negative No : ";
    for(int i=0;i<neg;i++)
    {
        cout<<B[i]<<" ";
    }
    cout<<"\nPositive No :";
    for(int i=0;i<pos;i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl<<"Negative NumberS:"<<neg;
    cout<<endl<<"Positive Numbers:"<<pos<<endl;
    
    return 0;
}
