//cube//

#include<iostream>
using namespace std;

class cube
{
    public:
    cube(int side)
    {
        cout<<"Cube :"<<side*side*side;
    }
};

int main()
{
    cube c(4);
    return 0;
}
