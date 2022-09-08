/******************************************************************************
                        Inline Function
*******************************************************************************/
#include <iostream>
using namespace std;

class Items
{
    int number;
    float cost;
    
    public:
    void set_data(int a,float b);
    void get_data();
};

void Items :: set_data(int a,float b)
{
    number=a;
    cost=b;
}

void Items :: get_data()
{
    cout<<"total Number of items : "<<number;
    cout<<"\ntotal cost is : "<<cost;
}


int main()
{
    Items obj;
    obj.set_data(10,300.89);
    obj.get_data();
    return 0;
}
