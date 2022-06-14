#include<iostream>
using namespace std;
    
int main()
{
	int i,n,sum=0,m;
	cout<<"Enter Number:";
	cin>>n;
	m=n;
	while(n>0)
	{
	    i=n%10;
	    n=n/10;
	    sum=sum+i*i*i;
	}
	if(sum==m)
	{
	    cout<<"Armstrong NO";
	}
	else
	{
	    cout<<"Not Armstring no" ;  
	}
			    
	return 0;
	    
}
