/******************************************************************************
 * vector
 
 * functiion - pop_back();

 * syntax:
            vector_name.pop_back();
 *it removes element at the end of the vector 

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
    cout<<"using pop_back function : ";
    vec.pop_back();
    for(int i=0 ; i< vec.size() ;i++)
    {
         cout<<vec[i]<<" ";
    }

    return 0;
}
