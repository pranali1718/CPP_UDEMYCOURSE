/******************************************************************************

*******************************************************************************/

#include <iostream>
using namespace std;


class Myclass
{
    public:
    int x;
    static int a;
    
    Myclass()
    {
        a++;
    }
    static void count()
    {
        cout<<"\nvalue of a is: "<<a;
    }
    
};

int Myclass :: a=0;

int main()
{
    cout<<Myclass::a;
    Myclass obj1,obj2,obj3;
    cout<<endl<<Myclass::a;
    obj1.count();
      return 0;
}
