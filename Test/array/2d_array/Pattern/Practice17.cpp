#include<iostream>
using namespace std;

int n;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cout<<(2*(i+j)-3)<<" "; 
        }
        cout<<endl;
    }               
    return 0;
}
