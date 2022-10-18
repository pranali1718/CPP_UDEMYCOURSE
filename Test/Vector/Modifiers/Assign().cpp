/******************************************************************************
 * vector
 
 * functiion - assign(size , new_element);

 * syntax:
            vector_name.assign(vec_size , new_element);
 *it removes previos all element upto the size assign to the assign function 

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
   
    cout<<"using assign function : ";
    vec.assign(vec.size(),31);
    for(int i=0 ; i< vec.size() ;i++)
    {
         cout<<vec[i]<<" ";
    }

    return 0;
}
