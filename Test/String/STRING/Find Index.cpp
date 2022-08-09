/*
    in this code,
    i used find() function
    by using i able to find the indexing of the specific letter/ word
    syntax:
        str_name.fin("word/letter you want find")
*/    
        
#include <iostream>
using namespace std;

int main()
{
    string a="I am Happy ";
    cout<<"String is :"<<a;
     
    cout<<endl<<"Find Happy at: "<<a.find("Happy");
    
    return 0;
}
