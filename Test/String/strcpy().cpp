#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[]="abc";
    char b[]="gfo";
    
    strcpy(a,b);
    
    cout<<"string 1:"<<a<<endl;
    cout<<"string 2:"<<b;
    return 0;
}


/*ommiting namespace ,using std::*/

#include <iostream>
#include <cstring>
//using namespace std;

int main()
{
    char a[]="abc";
    char b[]="gfo";
    
    strcpy(a,b);
    
    std::cout<<"string 1:"<<a<<std::endl;
    std::cout<<"string 2:"<<b;
    return 0;
}
