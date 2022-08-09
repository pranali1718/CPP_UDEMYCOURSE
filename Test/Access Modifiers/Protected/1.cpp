/*
in protected ,
protected data members can accessible in same class by using the public fucntion 

the difference between public and protected is 
the protected is accessible in the derived class also

also in code there is protected function , to call that function have to made another function which
is public,and then call it 

*/
#include <iostream>
using namespace std;

class base                                                        // define class
{
    protected:                                                    //protected data member
        int x=9;
        int y=9;
        int z;
    
    protected:                                                  //protected function
        void sub()
        {
            cout<<"sub :"<<x-y<<endl;
        }
        
    public:                                                     //public function
    void fun1()
    {
        sub();
    }
};

class derived :public base                                      //derived class
{
    public:                                                     //public function
        void add(int z)
        {
            cout<<endl<<x+y+z;
        }
};

int main()
{
        
    derived b;                                                  //derived class object
 
    b.add(2);                                           
    cout<<endl;
    b.fun1();
    
    return 0;
}
