#include <iostream>
using namespace std;

class Rectangle
{
    public:
    int length=7,breadth=7;
    
    int area();
};

int Rectangle::area()
{
        return length*breadth;
}
int main()
{
    Rectangle r;
    cout<<r.area();
    return 0;
}
