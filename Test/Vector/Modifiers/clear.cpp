/******************************************************************************
 * vector
 
 * functiion - clear();
 *             

 * syntax:
            vector_name.clear();
                        
 *it erase vector

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(44); 
    vec.push_back(1);
    vec.push_back(11);
    cout<<"using push_back function : ";
    for(int i=0 ; i< vec.size() ;i++)
    {
         cout<<vec[i]<<" ";
    }
    cout<<endl;

    vec.clear();
    cout<<endl<<"Size of Vector is : "<<vec.size();
    

    return 0;
}
