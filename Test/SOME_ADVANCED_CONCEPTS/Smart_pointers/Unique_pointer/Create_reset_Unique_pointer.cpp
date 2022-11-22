/*************************************************************************************************
 * code for cerate Unqiue Pointer and reset that pointer
 * 
 * in this cod ei used reset function for assign another vlaue to the same pointer 
 * Create unique_ptr 
 *      Syntax:
 *              unique_ptr< int > p1 (new int(value_assign_to_pointer));
 * 
 * for Reset the Pointer
 *      Syntax:
 *              p1.reset(new int( new_value_want_to_be_assign));
 ***************************************************************************************************/


#include<iostream>
#include<memory>

using namespace std;

void fun()
{
    cout<<"------------------Unique Pointer-----------------"<<endl<<endl;
    unique_ptr <int> p1 (new int (20));                                 //creating unique pointer

    cout<<"Value of Pointer is : "<<*p1<<endl;                                                    //printfing *p1
    
    p1.reset(new int(30));                                              //reset the value
    cout<<"Value of Pointer After Resetting : "<<*p1<<endl;                                                    //print the reset value of pointer

}

int main()
{   
    fun();
    cout<<"---------------------End--------------------"<<endl<<endl;
    return 0;
}
