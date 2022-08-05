#include <iostream>
using namespace std;

float base,height,side_1,side_2,side_3; 

class Triangle                                                      //class 
{       
    public: 
    
    Triangle(float base ,float height)
    {
        cout<<"Area : "<<0.5*base*height;
    }
    Triangle(float side_1,int side_2,int side_3)
    {
        cout<<"\nPerimeter is: "<<side_1+side_2+side_3;
    }
};

int main()
{
    Triangle t(2.1,3.0),t1(2.1,2,2);
    
    return 0;
}
