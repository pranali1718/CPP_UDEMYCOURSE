/*count words*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int temp=0;
    string a="I am Pranali Mahale";
    int b=a.length();
    cout<<"String : "<<a<<endl<<"Length of String : "<<b<<endl;
    
    for(int i=0;i<b;i++)
    {
        if(a[i]==' ')
        {
            temp++;
        }
    }
    cout<<"Words : "<<temp+1;
    return 0;
}
