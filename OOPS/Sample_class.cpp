/*passing parameters in class*/

#include <iostream>
using namespace std;


class rectangle
{
    public:                         //declaring them as public
    int length=2;                   //passing parameters
    int breadth=2;
    
    int area()                      //creating fucntion
    {
        return length*breadth;
    }   
};                                  //closing fucntion
int main()
{
   
    rectangle r1;                   //creating object of class  
    cout<<r1.area();                //calling function using object
    return 0;
}


/*passing para,terts in main method*/

#include <iostream>
using namespace std;


class rectangle
{
    public:                         //declaring them as public
    int length;                   
    int breadth;
    
    int area()                      //creating fucntion
    {
        return length*breadth;
    }   
};                                  //closing fucntion
int main()
{
   
    rectangle r1;                   //creating object of class  
    r1.length=2;r1.breadth=3;       //passing parameters
    cout<<r1.area();                //calling function using object
    return 0;
}

