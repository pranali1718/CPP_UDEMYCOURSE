/******************************************************************************
 * Template Functions
 * Syntax : 
        template<class (name)>
        return_type f_name(arguments of type T);
        {
            //body;
        }
        
        or
        template<typename (name)>
        return_type f_name(arguments of type T);
        {
            //body;
        }
        
 *  in the syntax, typename and class are both valid 
 *  
*******************************************************************************/

#include <iostream>
using namespace std;

template<class T>
void add(T a,T b)
{
    cout<<"addiiton is : "<<a+b;
}
int main()
{
    int a,b;
    cout<<"enter two No : ";
    cin>>a>>b;
    add(a,b);

    return 0;
}
