#include<iostream>
using namespace std;
int pow(int m,int n)
{
    for(int i=1;i<n;i++)
    {
        m=m*2;
        
    }
    return m;
//write a pow() function here 
}   
int main()
{
    cout<<pow(2,5);
    return 0;
}


//using temp variable

#include<iostream>
using namespace std;
int pow(int m,int n)
{
    int temp =1;
    for(int i=1;i<=n;i++)
    {
        temp=temp*m;
        
    }
    return temp;
//write a pow() function here 
}   
int main()
{
    cout<<pow(2,5);
    return 0;
}


