/*
String:
1.input String
2.cout String
3.length of String
4.vertical String
5.reverse String
6.adding String/append string
7.overwrite string
*/

#include<iostream>
using namespace std;

int main( )
{
    string a;                   
    string b;
    cout<<"Enter two string :" ;            
    cin>>a>>b;                                      //input String
    cout<<"Size 1 S :"<<a.length()<<endl;           //length of String
    cout<<"Size 2 S :"<<b.length()<<endl;           //length of String
    cout<<"1st String: "<<a<<endl;                  //cout String
    cout<<"2nd String: "<<b<<endl;                  //cout String
	for(int i=0;i<a.length();i++)                   //vertical String
	{
	    cout<<a[i]<<endl;
	}
	cout<<endl;
	for(int i=a.length();i>=0;i--)                  //reverse string
	{
	    cout<<a[i];
	}
	cout<<endl;
	for(int i=0;i<b.length();i++)                   //vertical String
	{
	    cout<<b[i]<<endl;
	}
	cout<<endl;
	for(int i=b.length();i>=0;i--)                  //reverse string
	{
	    cout<<b[i];
	}
	cout<<endl;     
	cout<<"addd : "<<a+b<<endl;                        //adding string/append string
	cout<<"append : "<<a.append(b)<<endl;                //adding string/append string
	a=b;
	cout<<"overwrite : "<<a;                            //overwrite string
	

    return 0;
}
