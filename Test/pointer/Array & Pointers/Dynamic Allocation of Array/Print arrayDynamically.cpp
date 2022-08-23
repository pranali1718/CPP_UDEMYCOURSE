#include<iostream>
using namespace std;
int main() 
{
	int size;
	cout<<"Enter Size of array :";
	cin>>size;
	
	int *ap =new int[size];
	
	cout<<"Enter "<<size<<" Elements : ";
	for(int i=0;i<size;i++)
	{
	    cin>>ap[i];
	}
	
	cout<<"You Enterred :";
	for(int i=0;i<size;i++)
	{
	    cout<<ap[i]<<" ";
	}
	return 0;
}
