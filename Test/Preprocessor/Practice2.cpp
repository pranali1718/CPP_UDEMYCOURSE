/******************************************************************************
 * Preprocessor
 * #x is mean to be "  ", it dirreclt converted into string 
 * if you forget that you will define value or not then you can use 
        #ifndef Name_of_Varible
        
        #define Name_of_Varible value
        
        #endif
 *
*******************************************************************************/

#include <iostream>
using namespace std;

#define a 2
#define SQR(x) (x*x)
#define MSG(x) #x

#ifndef a

#define a 2

#endif
int main()
{
    cout<<SQR(5)<<endl;
    cout<<MSG(Pranali mahale);
    return 0;
}
