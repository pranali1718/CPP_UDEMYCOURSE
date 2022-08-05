/*Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function 
named 'Area' which returns the area. 
Length and breadth are passed as parameters to its constructor*/


#include <iostream>
using namespace std;

class Rectangle                                                      //class 
{       
    public: 
    int l,b;
    Rectangle(int length, int breadth)
    {
        l=length;
        b=breadth;
    }
    
    int area()
    {
        return l*b;
    }
};

int main()
{
    Rectangle r1(4,5),r2(5,8);
    cout<<"Area 1:"<<r1.area();
    cout<<endl<<"Area 2:"<<r2.area();
    
    return 0;
}
