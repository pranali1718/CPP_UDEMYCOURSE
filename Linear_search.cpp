#include <iostream>
using namespace std;

int main()
{
    bool res;
    int k,key;
    int A[]={1,3,5,8,9,33,22,56,34,66};
    cout<<"Enter the key : ";
    cin>>key;
    
    for(int i=0;i<10;i++)
    {
        
        if(key==A[i])
        {
            res = true;
            k = i;
        }
       
    }
    if(res == true)
    {
        cout<<"Element found at "<<k<< " position";
    }
    else
    {
        cout<<"Element not found";
    }
    
}
