/*******************************************************************************************
                                array in class
********************************************************************************************/
#include <iostream>
using namespace std;

#define size 10

class Sample
{
    public:
    int a[size];
    void set_val()
    {
        cout<<"size : "<<size<<endl;
        cout<<"Enter Array Elements : ";
        for(int i=0;i<size;i++)
        {
            cin>>a[i];
        }
       
    }
    
    void get_val()
    {
        cout<<"Array Elements are : ";
        for(int i=0;i<size;i++)
        {
            cout<<a[i]<<" ";
        }
    }
   
};

int main()
{
    Sample s;
    s.set_val();
    s.get_val();
    return 0;
}
