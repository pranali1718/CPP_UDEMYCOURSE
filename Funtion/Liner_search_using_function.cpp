#include<iostream>
using namespace std; 

int key;
int A[7]={4,3,7,9,5,39,34};

int L_search()
{
    for(int i=0;i<7;i++)
    {
       if(key==A[i])
       {
           cout<<"Key element found at :"<<i;
           return 0;
       }
    }
    cout<<"element not found";
    
    return 0;
}

int main()
{
    
    cout<<"enter key";
    cin>>key;
    L_search();
    return 0;
}
