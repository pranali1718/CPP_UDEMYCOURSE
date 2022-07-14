/*passing paramters private ,using get set functions*/

#include <iostream>
using namespace std;

class rectangle
{
    int Length=2;                   //passing parameters as private
    int Breadth=2;
    
    public:                         //declaring them as public
    
    void SetLength(int l)
    {
        if(l>0)                                 //checking the length is positive
            Length = l; 
        else
        {
            cout<<"Enter Correct Length"<<endl;
            exit(0);
        }
    }
    void SetBreadth(int b)
    {
        if(b>0)                                 //checking the breadth is positive
            Breadth = b; 
        else
        {
            cout<<"Enter Correct Breadth"<<endl;
            exit(0);
        }
    }
    int getLength()
    {
        return Length;
    }
    int getBreadth()
    {
        return Breadth;
    }
    int area()                      //creating fucntion
    {
        return Length*Breadth;
    }   
    int perimeter()
    {
        return 2*(Length+Breadth);
    }
};                                  //closing fucntion

int main()
{
   
    rectangle r1;                                     //creating object of class  
    r1.SetLength(10);
    r1.SetBreadth(-2);
    cout<<"Area Is:"<<r1.area()<<endl;                //calling function using object
    cout<<"Perimeter Is:"<<r1.perimeter(); 
    return 0;
}


/*--------------------------------------------------------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

class rectangle
{
    int Length;                   //passing parameters as private
    int Breadth;
    
    public:                         //declaring them as public
    
    void Set(int l,int b)
    {
        if(l>0)                                 //checking the length is positive
            Length = l; 
        else
        {
            cout<<"Enter Correct Length"<<endl;
            exit(0);
        }
        
        if(b>0)                                 //checking the breadth is positive
            Breadth = b; 
        else
        {
            cout<<"Enter Correct Breadth"<<endl;
            exit(0);
        }
    }
 
    void get()
    {
        cin>>Length;
        cin>>Breadth;
    }
   
    int area()                      //creating fucntion
    {
        return Length*Breadth;
    }   
    int perimeter()
    {
        return 2*(Length+Breadth);
    }
};                                  //closing fucntion

int main()
{
   
    rectangle r1;                                     //creating object of class  
    r1.Set(10,-2);
    cout<<"Area Is:"<<r1.area()<<endl;                //calling function using object
    cout<<"Perimeter Is:"<<r1.perimeter(); 
    return 0;
}


//or//
#include <iostream>
using namespace std;

class rectangle
{
    int Length;                   //passing parameters as private
    int Breadth; 
    
    public:                         //declaring them as public
    
    void Set(int l,int b)
    {
        if(l>0 && b>0)                                 //checking the length is positive
        {
            Length = l;
            Breadth = b; 
        }
        else
        {
            cout<<"Enter Correct Values"<<endl;
            exit(0);
        }
    }
 
    void get()
    {
        cin>>Length;
        cin>>Breadth;
    }
   
    int area()                      //creating fucntion
    {
        return Length*Breadth;
    }   
    int perimeter()
    {
        return 2*(Length+Breadth);
    }
};                                  //closing fucntion

int main()
{
   
    rectangle r1;                                     //creating object of class  
    r1.Set(10,-2);
    cout<<"Area Is:"<<r1.area()<<endl;                //calling function using object
    cout<<"Perimeter Is:"<<r1.perimeter(); 
    return 0;
}
