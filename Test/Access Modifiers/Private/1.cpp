/*
in private ,
we can only acess the private data member by using the "public" function 
otherwise you cant access it 

private accessible in same class only
*/
#include <iostream>
using namespace std;

class base                                                      // define class
{
    private:                                                    //private data member
        int x=9;
        int y=9;
    
    public:                                                     //public function
        void add()
        {
            cout<<x+y;
        }
};

int main()
{
    base b;
    b.add();
    
    return 0;
}
