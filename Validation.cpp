#include <iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    if(b==0)
    {
        cout<<"Invalid denominator"<<endl;
    }
    else
    {
         c=a/b;
         cout<<c<<endl;
    }
    return 0;
}
