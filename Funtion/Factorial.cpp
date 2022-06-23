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


//with noth argument,return type//

//no arguemnt, return type//

#include<iostream>
using namespace std;

int factorial(int);

int main()
{
    int n;
    cout<<"Enter a Number";
    cin>>n;
    cout<<factorial(n);
}

int factorial(int n)
{
    int fact=1;
    
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    
    return fact;
}
