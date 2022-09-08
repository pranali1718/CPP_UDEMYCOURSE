/*******************************************************************************************
                        class object and function outside the class using inline
********************************************************************************************/
#include <iostream>
using namespace std;

class Number
{
    private:
    int x,y;
    
    public:
    
    void set_data();
    void get_data(void);
    int largest(void);
};

inline int Number :: largest(void)
{
    if(x>y)
        return x;
    else 
        return y;
}

inline void Number :: set_data()
{
    cout<<"Enter Vlaues:";
    cin>>x>>y;
}

inline void Number :: get_data()
{
    cout<<"Largest is: "<<largest();
}

int main()
{
    Number n;
    n.set_data();
    n.get_data();
    return 0;
}
