/*
Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays. E.g.-
INITIAL array
*/

#include <iostream>
using namespace std;

int main()
{
    int a[10]={2,3,4,5,6,7,8,9,17,12};
    /*for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
        if(i==4)
        {
            cout<<endl;
        }
    }*/
    
    cout<<"Split array 1 is: ";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Split array 2 is: ";
    for(int i=5;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}
