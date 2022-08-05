/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class
named 'Triangle' with a function to print the area and perimeter.*/


#include <iostream>
using namespace std;

float base,height,side_1,side_2,side_3; 

class Triangle                                                      //class 
{       
    public: 
    void area()                                                     //function area
    {
        cout<<"Enter Base & Height of Triangle : ";
        cin>>base>>height;  
        cout<<"Area : "<<0.5*base*height;
    }   
    void perimeter()                                                //function perimeter
    {
        cout<<"\nEnter sides of Triangle : ";
        cin>>side_1>>side_2>>side_3;
        cout<<"Perimeter : "<<side_1+side_2+side_3;
    }
    
};

int main()
{
    Triangle t;
    t.area();
    t.perimeter();
    return 0;
}
