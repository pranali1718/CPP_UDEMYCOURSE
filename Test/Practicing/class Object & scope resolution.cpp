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

inline void Items :: set_data(int a,float b)
{
    number=a;
    cost=b;
}

inline void Items :: get_data()
{
    cout<<"\ntotal Number of items : "<<number;
    cout<<"\ntotal cost is : "<<cost;
}


int main()
{
    Items obj;
    obj.set_data(1,300.89);
    obj.get_data();
    
    Items obj1;
    obj1.set_data(2,100.9);
    obj1.get_data();
    return 0;
}
