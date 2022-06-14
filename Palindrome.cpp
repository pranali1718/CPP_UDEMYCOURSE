
#include <iostream>  
using namespace std;  
int main()  
{  
    int n,i,rev=0,m;    
    cout<<"Enter the Number:";    
    cin>>n;    
    m=n;    
    while(n>0)    
    {    
         i=n%10;    
         n=n/10;
         rev=(rev*10)+i;   
    }    
    if(m==rev)    
        cout<<"Palindrome";    
    else    
        cout<<"not Palindrome";   
      return 0;  
}
