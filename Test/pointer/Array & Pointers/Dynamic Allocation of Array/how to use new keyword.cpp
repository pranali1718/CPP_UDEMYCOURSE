#include<iostream>
using namespace std;
int main()
{
    
	int *p=new int[5];                  //int pointer_name = new data_type[size];
	
	cout<<"Enter 5 elements: ";
	for(int i=0;i<5;i++)                //scan the elements
	{
	    cin>>p[i];
	}
	
	cout<<"YOU enetered :";
	for(int i=0;i<5;i++)
	{
	    cout<<p[i]<<" "<<&p[i]<<endl;       //print the elemts and address
	}
	return 0;
}
