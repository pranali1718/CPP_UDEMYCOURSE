#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int count;
    string a="python";
    int temp;
    cout<<a;
    int b=a.length();
    cout<<endl<<b<<endl;
    
    for(int i=0 ; i<b ;i++ )
    {
        for(int j=0 ; j<b-1 ; j++)
        {
            if(a[j]>=a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            } 
        }
        
    }
    cout<<a;
    
    
    return 0;
}
