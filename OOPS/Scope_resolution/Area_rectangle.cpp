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


//Parametrised Function//

#include <iostream>
using namespace std;

class Rectangle
{
    public:
    int length,breadth;
    
    int area(int ,int );
};

int Rectangle::area(int a, int b)
{       
        length=a;
        breadth =b;
        return length*breadth;
}
int main()
{
    Rectangle r;
    cout<<r.area(7,2);
    return 0;
}
