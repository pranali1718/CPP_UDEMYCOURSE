#include<iostream>
using namespace std;
    
int main()
{
	int n,i,rev=0,m;
	cout<<"Enter the Number :";
	cin>>n;
	m=n;   
	while(n>0)
	{
		i=n%10;
	    n=n/10;
		rev=rev*10+i;
	}
	cout<<"Reverse Number is :"<<rev<<endl;
	
	if(m==rev)
	{
	    cout<<"Given Number is Palindrome"<<endl;
	}
	else
	{
	    cout<<"Given Number is Not a Palindrome";
	}
	    
	return 0;
}
