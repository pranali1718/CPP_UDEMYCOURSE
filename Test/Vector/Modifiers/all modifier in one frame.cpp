/******************************************************************************
 * Vector
 * no need to specify size
 * we can add element as we want.
 * size automatically increase as we adding the elements 
 * Syntax 
 *      vector <data_type> vector_name;
 * 
 * ******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec; 
    int size;
  
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3); 
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    
    size=vec.size();
    cout<<"using push_back function : ";
    for(int i=0 ; i< vec.size() ;i++)
    {
         cout<<vec[i]<<" ";
    }
    cout<<endl<<"size of vector is : "<<size;
    cout<<endl<<"-----------------------------------------------"<<endl;
    
    size=vec.size();
    cout<<"using pop_back function : ";
    vec.pop_back();
    for(int i=0 ; i< vec.size() ;i++)
    {
         cout<<vec[i]<<" ";
    }
    cout<<endl<<"size of vector is : "<<vec.size();
    cout<<endl<<"-----------------------------------------------"<<endl;
    
    
    cout<<"using assign function : ";
    vec.assign(8,100);
    for(int i=0 ; i< vec.size() ;i++)
    {
         cout<<vec[i]<<" ";
    }
    cout<<endl<<"size of vector is : "<<vec.size();
    cout<<endl<<"-----------------------------------------------"<<endl;
    
   
    cout<<"using insert function at beginnning : ";
    vec.insert(vec.begin(),55);
    for(int i=0 ; i< vec.size() ;i++)
    {
         cout<<vec[i]<<" ";
    }
    cout<<endl<<"size of vector is : "<<vec.size();
    cout<<endl;
    
    cout<<endl<<"using insert function at end : ";
    vec.insert(vec.end(),1);
    for(int i=0 ; i< vec.size() ;i++)
    {
         cout<<vec[i]<<" ";
    }
    cout<<endl<<"size of vector is : "<<vec.size();
    cout<<endl<<"-----------------------------------------------"<<endl;
    
    cout<<"using erase function at beginnning : ";
    vec.erase(vec.begin());
    for(int i=0 ; i< vec.size() ;i++)
    {
         cout<<vec[i]<<" ";
    }
    cout<<endl<<"size of vector is : "<<vec.size();
    cout<<endl<<"-----------------------------------------------"<<endl;
    
    cout<<"using clear function  ";
    vec.clear();
    cout<<endl<<"size of vector is : "<<vec.size();
    cout<<endl<<"-----------------------------------------------"<<endl;
    return 0;
}
