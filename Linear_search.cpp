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


*----------------------------------------------------------------------------------------------------------------------------------------------
    
    //linear search for input from the user//
    
    #include <iostream>
using namespace std;

int main()
{
    int A[5];
    int n=5,key;
    cout<<"Enter Elements in array:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter key";
    cin>>key;
    
    for(int i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<"Element found at "<<i<<"position";
            return 0;
        }
        
    }
   cout<<"Element not found"; 
    
    return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main()
{
    int A[]={1,4,5,6,7,8,9};
    int key;
    cout<<"enter key :";
    cin>>key;
    for(int i=0;i<7;i++)
    {
        if(key==A[i])
        {
            cout<<"Element found at "<<i<<"position"<<endl;
            return 0;
        }
    }
    cout<<"Element not found";
}
 
