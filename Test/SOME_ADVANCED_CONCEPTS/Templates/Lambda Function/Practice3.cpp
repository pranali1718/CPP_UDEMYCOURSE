/******************************************************************************
 *lambda Function
 * [ ] = known as capturelist or lambda introduces
 * ( ) = known as parameter list
 * Syntax :
        [capture_list](parameter_list)->return_type{body}(f_call);
 * ---------------------------------------------------------------------------
 * 
 * code : to access the value in code using main
 * 
 * int this code ,have to use the varibale name in captured list for accessing them
 * and for incrementing use reference of variable

 
 *******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 5;
    
    [a,b]()                                 //fun for access the value
    {
        cout<<a<<" "<<b<<endl;
    };
    
    
    cout<<endl<<"Increment Function :-"<<endl;
    auto fun1 = [&a,&b]()                                 //fun for increment the value
    {
        cout<<a++<<" "<<b++<<endl;
    };
    
    fun1();
    fun1();
    return 0;
}
