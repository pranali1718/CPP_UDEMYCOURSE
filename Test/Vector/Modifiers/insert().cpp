/******************************************************************************
 * vector
 
 * functiion - insert(vec.begin(),element_to_insert);
 *              insert(vec.end(),element_to_insert);

 * syntax:
            vector_name.insert(vec.begin(),element_to_insert);
                                or
            vector_name.insert(vec.end(),element_to_insert);                       
 *it insert new element to vector

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
  
    cout<<"using insert function at beginnning : ";
    vec.insert(vec.begin(),100);
    for(int i=0 ; i< vec.size() ;i++)
    {
         cout<<vec[i]<<" ";
    }
    
    cout<<endl;
    cout<<"using insert function at end : ";
    vec.insert(vec.end(),1);
    for(int i=0 ; i< vec.size() ;i++)
    {
         cout<<vec[i]<<" ";
    }

    return 0;
}
