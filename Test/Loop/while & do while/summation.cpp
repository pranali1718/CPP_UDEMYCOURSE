#include <iostream>
using namespace std;

int main()
{
    int n=1,a=0,i;
    cout<<"Enter Limit :";
    cin>>i;
    while(n<=i)
    {
        cout<<n<<" "<<endl;
        a+=n;                           //assignment opearator a=a+n;
        n++;
    }
    cout<<"Summation is: "<<a;
        return 0;
}
