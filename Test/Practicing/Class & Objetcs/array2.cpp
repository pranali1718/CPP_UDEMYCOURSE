/*******************************************************************************************
                                array in class
********************************************************************************************/
#include <iostream>
using namespace std;

#define size 5                                              //defining fix size of array

class Sample                                                //base class
{
    public:
    
    int a[size];                                            //declare array
   
    void set_val()                                          //function for taking array input
    {
        cout<<"size : "<<size<<endl;
        cout<<"Enter Array Elements : ";
        for(int i=0;i<size;i++)
        {
            cin>>a[i];
        }
       
    }
    inline void get_val()                                          //function for display array
    {
        cout<<"Array Elements are : ";
        for(int i=0;i<size;i++)
        {
            cout<<a[i]<<" ";
        }
    }
};

class Sample_Derived : public Sample                                //derived class
{
    public:
    int sum=0;
    void add(void)                                                  //additon function
    {
        for(int i=0;i<size;i++)
        {
            sum=sum+a[i];
        }
        cout<<"\nSum is : "<<sum;
    }
};

int main()
{
    Sample s;                   
    Sample_Derived d;
    d.set_val();
    d.get_val();
    
    d.add();
    return 0;
}
