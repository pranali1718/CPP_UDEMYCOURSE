#include<iostream>
using namespace std;

int n;
int main()
{
    for(int i=1;i<6;i++)
    {
        n=i;
        for(int j=1;j<6;j++)
        {
            cout<<n<<" "; 
            n=n+5;
        }
        cout<<endl;
    }               

    return 0;
}
