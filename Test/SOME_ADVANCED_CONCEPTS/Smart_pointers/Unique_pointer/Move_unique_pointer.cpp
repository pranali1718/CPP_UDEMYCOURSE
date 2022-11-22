/**********************************************************************************************
 * Code for Move the Pointer
 * 
 * Syntax:  
 *      unique_ptr<int> pointer_2 (move (pointer_1));
 *      this means pointer_2 moves to place of pointer_1
***********************************************************************************************/

#include<iostream>
#include<memory>

using namespace std;

void fun()
{
    unique_ptr<int> p1 (new int(20));

    cout<<"-----------------------Unique Pointer------------------------------"<<endl<<endl;
    cout<<"Value of Pointer P1 : "<<*p1<<endl;

    unique_ptr<int> p2 (move (p1));

    if(p1 == nullptr)
    {
        cout<<"Pointer P1 is Null "<<endl;
    }
    cout<<"Value of Pointer P2 : "<<*p2<<endl;

    p2.reset();

    if(p2 == nullptr)
    {
        cout<<"Pointer P2 is Null "<<endl;
    }
}

int main()
{
    fun();
    cout<<endl<<"-----------------------The End------------------------------"<<endl<<endl;
    return 0;
}
