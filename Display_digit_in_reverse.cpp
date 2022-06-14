#include<iostream>
using namespace std;
    
int main()
{
	int i,n;
	cout<<"Enter Number:";
	cin>>n;
	while(n>0)
	{
	    i=n%10;
	    n=n/10;
	    cout<<i<<endl;
	}
			    
	return 0;
	    
}
