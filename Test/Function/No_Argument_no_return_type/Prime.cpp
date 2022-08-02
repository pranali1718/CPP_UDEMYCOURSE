//Define a function to find out if number is prime or not.//

#include<iostream>
using namespace std;

void Prime()
{
    int x,temp=0;
    cout<<"Enter Number :";
    cin>>x;
    
    for(int i=1;i <= x;i++)
    {
        if(x%i == 0)
        {
            // cout<<"\nin if \n";
            temp++;
        }
    }
    //cout<<temp<<endl;
    if(temp>2)
    {
        cout<<"Not Prime";
    }
    else
    {
        cout<<"Prime";
    }
}

int main()
{
    Prime();
    return 0;   
}

