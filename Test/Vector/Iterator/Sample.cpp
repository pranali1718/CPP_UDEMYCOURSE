#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    vector <int> v;
    int size = v.size();
    
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    v.push_back(10);
    v.push_back(8);
    v.push_back(4);
    cout<<"Normal For Loop "<<endl;
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
    cout<<endl;
    cout<<"Using For each loop "<<endl;
    for(int x : v)
    {
        cout<<x<<" ";
    }
    
    cout<<endl;
    cout<<endl;
    cout<<"Using iterator "<<endl;
    vector <int> :: iterator itr;
    for(itr = v.begin(); itr!= v.end() ; itr++)
    {
        cout<<*itr<<" ";
    }
   
    
    
    return 0;
}
