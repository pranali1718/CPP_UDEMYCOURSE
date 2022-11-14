/******************************************************************************
 * Template Functions
 * Syntax : 
        template<class (name)>
        return_type f_name(arguments of type T);
        {
            //body;
        }
        
        or
        template<typename (name)>
        return_type f_name(arguments of type T);
        {
            //body;
        }
        
 *  in the syntax, typename and class are both valid 
*******************************************************************************/

#include <iostream>
using namespace std;

template<class T> 
T add(T &a,T &b)  
{  
    T result = a+b;  
    return result;  
      
}  
int main()  
{  
  int i ;  
  int j ;
  cout<<"Enter Two Integers : ";
  cin>>i>>j;
  float m = 2.3;  
  float n = 1.2;  
  cout<<"Addition of Integer is :"<<add(i,j);  
  cout<<'\n';  
  cout<<"Addition of float number is :"<<add(m,n);  
  return 0;  
}  
