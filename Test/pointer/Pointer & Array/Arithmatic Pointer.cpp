#include <iostream>
using namespace std;

int main()
{
    int var[3]={100,200,300};
    int *ptr;
    
    cout<<"Array Is : ";
    for(int i=0;i<3;i++)                        //printing Array
    {
        cout<<var[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<3;i++)                        //assignning the add to pointer
    {
        ptr=var;
    }
    cout<<endl;
    
    for(int i=0;i<3;i++)                        //print the values
    {       
        cout<<*ptr<<" ";
        ptr++;                                  //arithatic opearator for pointer array
    }
    cout<<endl;
    
    for(int i=0;i<3;i++)                        //print the adddress of values
    {       
        cout<<ptr<<" ";
        ptr++;
    }
}

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int var[3]={100,200,300};
    int *ptr[3];
    cout<<"Array Is : ";
    for(int i=0;i<3;i++)
    {
        cout<<var[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        ptr[i]=&var[i];
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr[i]<<" ";
    }
}

