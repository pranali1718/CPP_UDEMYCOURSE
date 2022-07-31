#include<iostream>
using namespace std;

int n;
int main()
{
    for(int i=1;i<=5;i++)
    {
        n=i;
        for(int j=1;j<=5;j++)
        {
            
            cout<<n<<" "; 
            n=n+1;
        }
        cout<<endl;
    }               
    return 0;
}
