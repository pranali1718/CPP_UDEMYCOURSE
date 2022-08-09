/*
In this code i used two predefine keywords 
1.insert - for the insertion 
    by using insert keyword you can insert any word at any index
    syntax:
        string_name.insert(index_no,"word want to replace");
                            or
        string_name.insert(index_no,other_string_name);
        
2.replace - for the replace
    by using replace keyword you can replace any word at any index
    syntax:
        string_name.replace(index_no,"word want to replace");
                            or
        string_name.replace(index_no,other_string_name);
*/    
        
#include <iostream>
using namespace std;

int main()
{
    string a="I am Happy ";
    string b=" sad sad sad";
    string c;
    string d;
    c=a.insert(11,b);
    d=b.replace(5,6,"happy");
    
    cout<<"String after insertion :";
    cout<<c;
    cout<<"\nString after replace :";
    cout<<d;
    return 0;
}
