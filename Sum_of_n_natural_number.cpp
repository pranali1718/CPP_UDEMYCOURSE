//1st 10 natural number

#include<iostream>
using namespace std;

int main()
{
    int i ,sum=0;
    /*cout<<"Enter Number:";
    cin>>n;
    */for(i=1;i<=10;i++)
    {
        sum+=i;
    }
     cout<<sum;
     return 0;
        
}


//SUm of n natural  number using for loop

#include<iostream>
using namespace std;

int main()
{
    int i ,n,sum=0;
    cout<<"Enter Number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
     cout<<sum;
     return 0;
        
}

////SUm of n natural  number using while loop

#include<iostream>
using namespace std;

int main()
{
    int i=0,n,sum=0;
    cout<<"Enter Number:";
    cin>>n;
    while(i<=n)
    {
        sum+=i;
        i++;
       
    }
     cout<<sum;
     return 0;
        
}

