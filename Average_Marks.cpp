#include<iostream>
using namespace std;

int main() 			
{
	int m1,m2,m3,avg=0;
	cout<<"Enter Three Subject Marks:\n";
	cin>>m1>>m2>>m3;
	if(m1!=0 && m2!=0 && m3!=0)
	{
    	avg=(m1+m2+m3)/3;
    	cout<<"Average is:"<<avg<<endl;
    	if(avg>=60)
    	{
    	    cout<<"Congratulations you have Grade A"; 
    	}
    	else if(avg<60 && avg>=35)
    	{
    	    cout<<"Congratulations you have Grade B"; 
    	}
    	else
    	{
    	    cout<<"You are failed";
    	}
	}
	else if(m1==0)
	{
	     cout<<"You are failed in m1";
	}
		else if(m2==0)
	{
	     cout<<"You are failed in m2";
	}
		else 
	{
	     cout<<"You are failed in m3";
	}
	return 0;

}
