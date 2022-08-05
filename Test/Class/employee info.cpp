
/*Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. 
The output should be as follows:
Name        Year of joining        Address
Robert        1994        64C- WallsStreat
Sam        2000        68D- WallsStreat
John        1999        26B- WallsStreat*/

#include <iostream>
using namespace std;

class Employee                                                     //class 
{       
    public: 
    
    string name;
    int year;
    string add;
    float sal;
    
};

int main()
{
    Employee e,e1,e2;
    e.name="John";
    e.year=1991;
    e.add="Science city";
    e.sal=20000.22f;
    e1.name="Sam";
    e1.year=1990;
    e1.add="Vastrapur";
    e1.sal=12000.333f;
    e2.name="Robert";
    e2.year=1999;
    e2.add="Navrangapura";
    e2.sal=25000.67f;  
    cout<<"NAME "<<"  "<<" YEAR "<<""<<" ADDRESS "<<"      "<<" SALARY \n";
    cout<<e.name<<"    "<<e.year<<"  "<<e.add<<"   "<<e.sal<<endl;
    cout<<e1.name<<"     "<<e1.year<<"  "<<e1.add<<"      "<<e1.sal<<endl;
    cout<<e2.name<<"  "<<e2.year<<"  "<<e2.add<<"   "<<e2.sal<<endl;
    return 0;
}
