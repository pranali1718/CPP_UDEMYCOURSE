#include <iostream>
#include <map>
#include <string>
using  namespace std;

int main()
{
    map <int,string> m_name;
    
    m_name.insert(pair<int,string>(101,"Farhan"));
    m_name.insert(pair<int,string>(102,"Pranali"));
    
   map<int,string> :: iterator itr;
   
   for(itr = m_name.begin(); itr != m_name.end() ; itr++)
   {
       cout<<itr->first<<" "<<itr->second<<endl;
   }
    
}
