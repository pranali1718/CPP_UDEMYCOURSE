#include<iostream>
using namespace std;
    
int main()
{
	int i,n,count=0;
	cout<<"Enter the Number :";
	cin>>n;
	    
	for(i=1;i<=n;i++)
	{
	    if(n%i==0)
	    {
		    count++;
	    }
	}
	    
    if(count==2)
		cout<<"It is a Prime Number";
    else
		cout<<"It is not a Prime Number";	 
			    
	return 0;
	    
}