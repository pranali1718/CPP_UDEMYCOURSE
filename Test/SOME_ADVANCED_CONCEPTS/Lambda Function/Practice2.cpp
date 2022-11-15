/******************************************************************************
 *lambda Function
 * [ ] = known as capturelist or lambda introduces
 * ( ) = known as parameter list
 * Syntax :
        [capture_list](parameter_list)->return_type{body}(f_call);
 * ---------------------------------------------------------------------------
 * 
 * code : to see how to use return type
 *      Syntax:
            int s = [](int x,int y)->return_type{body}(f_call);     
 * 
 * 
 *******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a = [](int x,int y)                         //paramterised fucntion 
    {
        return x+y;
    }(10,5);
    cout<<"Sum : "<<a;
    return 0;
}
