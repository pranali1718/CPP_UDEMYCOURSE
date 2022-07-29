#include <iostream>
using namespace std;
int n=2;
int main()
{
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(n<=50)
            {
                cout<<n<<"  ";
                n=n+2; 
            }
        }
         cout<<endl;
    }
    return 0;
