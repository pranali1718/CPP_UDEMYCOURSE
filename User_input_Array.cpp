//code by using function call

#include<iostream>
using namespace std;

void Array_input()
{
    int n,i;
    int A[n];
    cout<<"Enter elements ";
    for(int i=0;i<5;i++)
    
    {
        cin>>A[i];
    }
    cout<<"Array elements are:";
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{   
    Array_input();
	  return 0;
	    
}
