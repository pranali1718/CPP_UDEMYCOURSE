#include<iostream>
using namespace std;
    
int swap(int a,int b)
{
	cout<<"Before:"<<a<<" "<<b<<endl;
	int temp;
	temp=a;
	a=b;
	b=temp;
	    
	cout<<"After:"<<a<<" "<<b<<endl;
	return 0;
}
    
int main()
{    
	int x=10,y=20;
	swap(x,y);
	    
	cout<<x<<" "<<y<<endl;
	
	return 0;
	    
}
