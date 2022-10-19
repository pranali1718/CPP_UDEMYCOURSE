#include <cmath>
#include <cstdio>
#include <list>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    list <int> v;
    int size = v.size();
    
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    v.push_back(10);
    v.push_back(8);
    v.push_back(4);
  
    cout<<"Using For each loop "<<endl;
    for(int x : v)
    {
        cout<<x<<" ";
    }
    
    cout<<endl;
    cout<<endl;
    cout<<"Using iterator "<<endl;
    list <int> :: iterator itr;
    for(itr = v.begin(); itr!= v.end() ; itr++)
    {
        cout<<*itr<<" ";
    }
   
    
    
    return 0;
}
