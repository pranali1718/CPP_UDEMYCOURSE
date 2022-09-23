/******************************************************************************
 * namespace
 * 
*******************************************************************************/

#include <iostream>
using namespace std;

namespace first
{
    void fun()
    {
        cout<<"1 \n";
    }
};

namespace second
{
    void fun()
    {
        cout<<"2\n";
    }
};
int main()
{
    first :: fun();
    second :: fun();
    return 0;
}
***********************************************************************************************************************************


/******************************************************************************
 * namespace
 * 
*******************************************************************************/

#include <iostream>
using namespace std;

namespace first
{
    void fun()
    {
        cout<<"1 \n";
    }
};

namespace second
{
    void fun()
    {
        cout<<"2\n";
    }
};

using namespace first;
int main()
{
    fun();
    second :: fun();
    return 0;
}
