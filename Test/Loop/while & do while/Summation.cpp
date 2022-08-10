#include <iostream>
using namespace std;

/*int main()
{
    int n=1,a;
    while(n<=10)
    {
        //cout<<n<<" "<<endl;
        a+=n;                           //assignment opearator a=a+n;
        n++;
    }
    cout<<"Summation is: "<<a;
        return 0;
}*/

======================================================================

int main()
{
    int n,a=0;
    cout<<"Enter no : ";
    cin>>n;
    do
    {
        //cout<<"input: "<<n<<endl;
        a+=n;
        n--;
        
    }
    while(n>0);
    cout<<"output:"<<a;
    
}
