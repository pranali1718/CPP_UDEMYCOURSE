/******************************************************************************
 * Preprocessor
 * #x is mean to be "  ", it dirreclt converted into string 
 *
*******************************************************************************/

#include <iostream>
using namespace std;

#define SQR(x) (x*x)
#define MSG(x) #x
int main()
{
    cout<<SQR(5)<<endl;
    cout<<MSG(Pranali mahale);
    return 0;
}
