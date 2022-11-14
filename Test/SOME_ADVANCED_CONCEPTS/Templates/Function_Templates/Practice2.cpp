/******************************************************************************
 * Template Functions(with multiple parameters)
 * Syntax : 
        template<class (name1),class (name2)>
        return_type f_name(arguments of type T);   
        {
            //body;
        }
        
        or
        template<typename (name1), typename (name2)>
        return_type f_name(arguments of type T);
        {
            //body;
        }
        
 *  in the syntax, typename and class are both valid 
*******************************************************************************/

#include <iostream>
using namespace std;

template<class T1,class T2>
void add(T1 a,T2 b)  
{ 
    cout<<"Result : "<<a+b;  
}  
int main()  
{  
    int a=9;
    float b=1.1;
    add(a,b);
    return 0;  
}  
