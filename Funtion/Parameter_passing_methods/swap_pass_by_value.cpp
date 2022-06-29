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







//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int swapping(int x,int y)
{
    int temp;
    temp =x;
    x=y;
    y=temp;
    cout<<x<<" "<<y;
    return 0;
}

int main()
{
    int x,y;
    x=9;y=6;
    swapping(x,y);
    return 0;
}
