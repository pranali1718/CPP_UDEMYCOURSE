#include <iostream>
using namespace std;

/*int main()
{
    int n=1;
    while(n<=10)
    {
        cout<<n<<endl;
        n++;
    }
        return 0;
}*/
===========================================================================================
int main()
{
    int n=1;
    do
    {
        cout<<n<<endl;
        n++;
    }
    while(n<=10);
    
}


--------------------------------------------------------------------------
    int main()
{
    int n=1,key;
    cout<<"Enter Limit you want to print : ";
    cin>>key;
    do
    {
        cout<<n<<endl;
        n++;
    }
    while(n<=key);
    
}
