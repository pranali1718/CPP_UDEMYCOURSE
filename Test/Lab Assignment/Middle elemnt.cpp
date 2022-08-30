/**********************************************************************************************
 take 3 digit no and find the middle element of that .
 *********************************************************************************************/


#include <iostream>
using namespace std;

int main()
{
    int n,p,rev=0,i;
    cout<<"Enter no";
    cin>>n;
    
    cout<<"YOU ENTERED :"<<n<<endl;
    
    n=n/10;
    cout<<n<<endl;
    p=n;
    cout<<"p :"<<p;
    i=p%10;
    p=p/10;
    rev=rev*10+i;
    
    cout<<"rev : "<<rev;
    return 0;
}
