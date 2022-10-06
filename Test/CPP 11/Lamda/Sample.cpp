/******************************************************************************
 * lambda Keyword
  
 * Syntax:
 *      [](){cout<<"hello";} 
 *      [](int x,int y){cout<< x+y ;}(10,2)
 * we can  access local vaarible into unnamed function
*******************************************************************************/
#include<iostream>
using namespace std;

int main()
{
    int num_1=5,num_2=8;
    []()                                    //unnamed fucntion
    {
        cout<<"Hello";
    }                
    ();                                 //call for that function
    
    [](int x,int y)                         //unnamed function
    {
        cout<<endl<<"Add : "<< x+y<<endl;
    }   
    (10,2);                             //call for that function
    
    auto f = []()
    {
        cout<<"Hello Pranali";
    };
    f();
    
    [num_1,num_2]()
    {
        cout<<endl<<num_1<<" "<<num_2;
    }
    ();
    
}
