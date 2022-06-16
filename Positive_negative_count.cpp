#include <iostream>
using namespace std;
int main ()
{
    int A[]={4,8,-6,-9,5,2,7,-8,-3,78,-90};
    int pos =0;
    int neg =0;
    for(auto x:A)
    {    
        
        
        if(x<=0)
        {
            neg++;
        }
     
        else
        {
            pos++;
        }
    }
    cout<<endl<<"Negative NumberS:"<<neg;
    cout<<endl<<"Positive Numbers:"<<pos<<endl;
    
    return 0;
}
