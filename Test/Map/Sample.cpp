#include <iostream>
#include <map>
#include <string>
using  namespace std;

int main()
{
    map <int, string> m_name;
    
    m_name[101]= "Farhan";
    m_name[102]= "Pranali";
    
    cout<<"Employee at 102 is : "<<m_name[102];
    cout<<endl<<"Map size : "<<m_name.size();
    
}
