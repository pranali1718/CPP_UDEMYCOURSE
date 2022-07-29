#include <iostream>
using namespace std;
int n=1;
int main()
{
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(n<=49)
            {
                cout<<n<<" ";
                n=n+2;
            }
        }
        cout<<endl;
    }
    return 0;
}
