/************************************************************************************
 * Unique Pointer
 * 
 * 1) unique pointer can point single location
 * 2) two unique pointer can not be able to point single location (Because if scope of 1st object is end then the 2nd object will point to invalid loctaion(dangling pointer)).
 * 3) must be use #include<memory>
 * 4)
 * 
 * Syntax :
          unique_ptr<int> ptr_name (new int( int )) ;   
**************************************************************************************/

#include<iostream>
#include<memory>

using namespace std;

int main()
{
    unique_ptr <int> ptr (new int(10));
    int x=15;
    if(x == 15)
    {
        cout<<"value of x is :"<<x;
    }
    return 0;
}
