#include<iostream>
using namespace std;
    
int x=10;                   // x  outside the main function //global varible
int main()
{
	int x=20;               //x inside the main function
	{
		int x=30;           //x inside the block
		cout<<x<<endl;
	}
	    
	cout<<x<<endl;              // callling x which is 20
	cout<<::x<<endl;            //here we called the x which is 10
	    
}
