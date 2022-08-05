
/*
Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.
*/

#include <iostream>
using namespace std;

class Student                                                       //class 
{       
    public: 
    string name;
    int roll_no;
};

int main()
{
    Student s,s2 ;
    s.name="John";
    s.roll_no=2;
    cout<<s.name<<endl<<s.roll_no<<endl;
    s2.name="Sam";
    s2.roll_no=3;
    cout<<s2.name<<endl<<s2.roll_no;
   
    return 0;
}
