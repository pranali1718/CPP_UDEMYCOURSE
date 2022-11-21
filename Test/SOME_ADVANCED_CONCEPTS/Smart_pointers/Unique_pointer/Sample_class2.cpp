/***********************************************************************************************************
 *  C++ program to illustrate the use of unique_ptr *
 * 
 * 1)get() :- get function is used to return pointer managed by an object or  it returns nullptr if no object is owned.
 * 2) for transferring the ownership:
      Syntax:
            unique_ptr<class_name> obj_name1 (new class_name(parameters));              // creating object
            unique_ptr<class_name> obj_name2 = move(obj_name1);                         //move function
 *
 * in this example at first p1 returns address
 * then after we creted p2 then it returns address and p1 return null
 * after that we created p3 then it returns address and p1,p2 return null
 * 
************************************************************************************************************/


#include<iostream> 
#include<memory> 
using namespace std; 
  
class test 
{ 
public: 
    void show() 
    { 
        cout<<"calling show method"<<endl; 
    } 
}; 
  
int main() 
{ 
    unique_ptr<test> p1 (new test); 
    p1 -> show(); 
  
    // returns the memory address of p1 
    cout <<"P1.get() "<< p1.get() << endl; 
  
    // transfers ownership to p2 
    unique_ptr<test> p2 = move(p1); 
    p2 -> show(); 
    cout << "P1.get() "<<p1.get() << endl; 
    cout << "P2.get() "<<p2.get() << endl; 
  
    // trtestnsfers ownership to p3 
    unique_ptr<test> p3 = move (p2); 
    p3->show(); 
    cout << "P1.get() "<<p1.get() << endl; 
    cout << "P2.get() "<<p2.get() << endl; 
    cout << "P3.get() "<< p3.get() << endl; 
  
    return 0; 
}
