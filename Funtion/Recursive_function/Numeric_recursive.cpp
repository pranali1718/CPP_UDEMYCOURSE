#include<iostream>
using namespace std;
    
void fun(int n)
{
	if(n>0)                     //putting contion ofr recursive function
	{
	    cout<<n<<endl;
		fun(n-1);               
	}
}
    
int main()
{
	int x=4;
	fun(x);                     //calling function
} 
