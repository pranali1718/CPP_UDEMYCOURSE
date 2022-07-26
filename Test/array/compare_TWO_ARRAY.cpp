/*
String:
1.input String
2.cout String
3.length of String
4.compare word with space

*/

#include<iostream>
using namespace std;

int main( )
{
    int size;
    cout<<"ENter size";
    cin>>size;
    int a[size];
    int b[size];
    int temp;
    cout<<"Array 1 elemets : \n";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"array 2 element : \n";
    for(int i=0;i<size;i++)
    {
        cin>>b[i];
    }
    cout<<endl<<"1st array : ";
    
    for(int i=0;i<size;i++)
    {
        cout<<a[i];
    }
    cout<<"\n2nd array : ";
    for(int i=0;i<size;i++)
    {
        cout<<b[i];
    }
    
    for(int i=0;i<size;i++)
    {
        temp=1;
        if(a[i]==b[i])
        {
            temp=0;
        }
    }
    if(temp==0)
    {
        cout<<"\nsame\n";
    }
    else
    {
        cout<<"\nnot same";
    }
    
    return 0;
}
