/*
****************************Pointers and Objects*****************************************

1.here I create the pointer of class with Objects
2.then assign the address of object to the pointer           p = &ob;
3.call the function by using this pointer                    p->show_num();  
*****************************************************************************************
*/
#include <iostream>
using namespace std;

class My_Class 
{
    int num;
    public:
    void set_num(int val) 
    {
        num = val;
    }
    void show_num()
    {
        cout << num << "\n";
    }
};

int main()
{
    //My_Class ob, *p;                                        // declare an object and pointer to it
    
    My_Class ob;
    My_Class *p;   
    
    ob.set_num(5);                                          // access ob directly
    ob.show_num();
    
    p = &ob;                                                // assign p the address of ob
    p->show_num();                                          // access ob using pointer

  return 0;
}
