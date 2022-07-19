//copy constructor build,using default constructor//

#include<iostream>
using namespace std;


class Number{
    int a;
    public:
        Number()
        {
            cout<<"Default Constructor called!!!"<<endl;        
            a = 0;
        }

        Number(Number &obj)
        {
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a+1;
        }

        void display(){
            cout<<"The number for this object is "<< a <<endl;
        }
};
int main()
{
    Number x;
    Number z=x;
    
    x.display();
    cout<<endl;
   
    z.display();
    cout<<endl;
    
    
    
   /* Number x, y, z2;
    x.display();
    y.display();*/
   // z.display();

   /* Number z1(); // Copy constructor invoked
    z1.display();

   

    Number z3 = z; // Copy constructor invoked
    z3.display();*/

    // z1 should exactly resemble z  or x or y

    return 0;
}
