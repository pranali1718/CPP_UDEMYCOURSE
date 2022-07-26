#include<iostream>
using namespace std;

int main()
{
    int i;
    int size,size1;
    cout<<"Enter size 1st array : ";
    cin>>size;
    int a[size];
    
    cout<<"enter size of 2nd array:";
    cin>>size1;
    int b[size1];
    
    int s = (size > size1) ? size : size1;
   // int s=size+size1;
    int c[s];
    
    cout<<"enter element for 1st array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element for 2nd array : ";
    for(int i =0;i<size1;i++)
    {
        cin>>b[i];
    }
    
    //cout<<"Element of 1st array are :"<<endl;
    for(int i=0;i<s;i++)
    {
            c[i]=a[i]+b[i];
    }
    //cout<<"elemnt of 2nd arrays : \n";
    
    for(int i=0;i<s;i++)
    {
        cout<<c[i]<<" ";
    }
    
    return 0;
        
}
