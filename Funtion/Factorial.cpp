//factorail using no argument ,return type//

//no arguemnt, return type//

#include<iostream>
using namespace std;

int factorial();

int main()
{
    cout<<factorial();
}

int factorial()
{
    int n,fact=1;
    cout<<"Enter a Number";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    
    return fact;
}
