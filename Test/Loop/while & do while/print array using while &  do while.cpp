#include<iostream>
using namespace std;


int main()
{
    int a[]={2,3,4,5,6,5};
    cout<<"array Element are: ";
    int i=0;
   /* while(i<6)
    {                                               //using while
        cout<<a[i]<<" ";
        i++;
    }*/
    
    do
    {                                               //using do while
       cout<<a[i]<<" ";
       i++;
    }while(i<6);
    return 0;
    
}
