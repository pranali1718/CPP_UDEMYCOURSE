//find volume and area using the constrcutor and class//

#include <iostream>
using namespace std;

class Rectangle
{
    private:
    int length;             
    int breadth;
    
    public:
    Rectangle();                            // default constructor
    Rectangle(int ,int);                    //parameterised constructor
    Rectangle(Rectangle &rect);             //copy constructor
    
    int display_area();                     //function 
    int set_Length_Breadth(int ,int );      //parameterised function  
    
    int get_len()
    {
        return length;
    }
    
    int get_bre()
    {
        return breadth;
    }
    
    ~Rectangle();                           //Destructor
};
    
Rectangle :: Rectangle()                    //defualt contructor
{
    length=3;                                       
    breadth=3;
    cout<<"\nDafault Const call"<<endl;
}

Rectangle :: Rectangle(int length_1,int breadth_1)       //parameterise constructor    
{
    length=length_1;
    breadth=breadth_1;
    cout<<"\nParameterised const call"<<endl;
}

int Rectangle :: set_Length_Breadth(int l ,int b)       //parameterised function
{
    length = l;
    breadth = b;
    // cout << "\nl : "<<len<<"\nb : "<<bre<<endl;
    cout<<"\nIn set fucntion"<<endl;
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

int Rectangle:: display_area()
{
    cout<<"Area is : ";
    return length*breadth;
}

class Cuboid : public Rectangle                         //class cuboid ,inherits Rectangle class
{
    private:
    int height;
    
    public:
    
    int setheight(int h)
    {
        height=h;
        return height;
    }
    
    int volume()
    {
        cout << "\nl : "<<get_len()<<"\nb : "<<get_bre()<<endl;
        cout<<"\nVoulme is : ";
        return get_len()*get_bre()*height;              //return type data is getting access by the fucntion call
        // cant get access private data member in another class
    }
};


Rectangle:: ~Rectangle()
{
    cout<<"\nDestructor called"<<endl;
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
    
    Cuboid c;
    cout<<"\nHeight : "<<c.setheight(4);
    cout<<c.volume();
    return 0;
}
