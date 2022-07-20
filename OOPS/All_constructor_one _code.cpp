#include <iostream>
using namespace std;

class Rectangle
{
    private:
    int length;             
    int breadth;
    
    public:
    Rectangle();                            // default constructor
    Rectangle(int ,int);                    //parameterise constructor
    Rectangle(Rectangle &rect);             //copy constructor
    
    int display_area();                     //function 
    int set_Length_Breadth(int ,int );      //parameterised function        
    ~Rectangle();                           //Destructor
};
    
Rectangle :: Rectangle()                
{
    length=3;                                       
    breadth=3;
    cout<<"\nDafault Const call"<<endl;
}

Rectangle :: Rectangle(int length_1,int breadth_1)          
{
    length=length_1;
    breadth=breadth_1;
    cout<<"\nParameterised const call"<<endl;
}

int Rectangle :: set_Length_Breadth(int l ,int b)
{
    length = l;
    breadth = b;
    cout<<"\nin set fucntion"<<endl;
    return 0;
   //return length*breadth;
}

Rectangle :: Rectangle(Rectangle &rect)
{
    length = rect.length + 2;
    
    breadth = rect.breadth + 2;
    
    cout<<"\nCopy const call"<<endl;
    //cout<<"\n for check length(for parameterisez/ default) : "<<length;
    //cout<<"\n for check breadth(for parameterisez/ default) : "<<breadth<<endl;
}

Rectangle:: ~Rectangle()
{
    cout<<"\nDestructor called"<<endl;
}


int Rectangle:: display_area()
{
    cout<<"Area is:";
    return length*breadth;
}


int main()
{
    Rectangle r;
    cout<<r.display_area();                     //default constructor call
    Rectangle r1(3,7);
    cout<<r1.display_area();                    //parameterised constructor call
    //cout<<r.set_Length_Breadth(6,9);
    r.set_Length_Breadth(6,9);
    cout<<r.display_area();             
    
    Rectangle r2(r);
    cout<<r2.display_area();                    //copy constructor call
    return 0;
}
