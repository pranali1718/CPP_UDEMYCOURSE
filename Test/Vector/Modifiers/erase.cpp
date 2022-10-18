/******************************************************************************
 * vector
 
 * functiion - erase(vec.begin());
 *             

 * syntax:
            vector_name.erase(vec.begin());
                        
 *it erase element of vector

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
  
    cout<<"using erase function at beginnning : ";
    vec.erase(vec.begin());
    for(int i=0 ; i< vec.size() ;i++)
    {
         cout<<vec[i]<<" ";
    }

    return 0;
}
