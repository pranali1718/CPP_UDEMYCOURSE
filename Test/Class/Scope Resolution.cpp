/*Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. 
  First function named as 'setDim' takes the length and breadth of the rectangle as parameters and 
  the second function named as 'getArea' returns the area of the rectangle. 
  Length and breadth of the rectangle are entered through keyboard.*/


#include <iostream>
using namespace std;

int length,breadth;

class Rectangle                                                      //class 
{       
    public: 
    int l,b;
    void setDim();
    int getArea();
};

void Rectangle:: setDim()
{
    l=length;
    b=breadth;
}

int Rectangle:: getArea()
{
    return l*b;
}

int main()
{
    cout<<"Enter Length & Breadth :";
    cin>>length>>breadth;
    
    Rectangle r;
    r.setDim();
    cout<<"Area is :"<<r.getArea();
    return 0;
}
