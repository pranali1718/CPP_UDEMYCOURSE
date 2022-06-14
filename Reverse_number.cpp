#include<iostream>
using namespace std;
    
int main()
{
	int n,i,rev=0;
	cout<<"Enter the Number :";
	cin>>n;
	    
	while(n>0)
	{
		i=n%10;
	    n=n/10;
		rev=rev*10+i;
	}
	cout<<"Reverse Number is"<<rev;
	    
	return 0;
}
