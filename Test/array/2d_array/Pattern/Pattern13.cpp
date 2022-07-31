#include<iostream>
using namespace std;

int n;
int main()
{
    for(int i=5;i>=1;i--)
    {
        n=i;
        for(int j=5;j>=1;j--)
        {
            
            cout<<n<<" "; 
            n=n+5;
        }
        cout<<endl;
    }               
    return 0;
}
