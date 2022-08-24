#include <iostream>  
using namespace std;  
void printname(char p[])  
{  
    cout << "Name is :" <<p;  
}  
  
int main()  
{  
    char s[20];                                     
    cout<<"Enter :";
    cin>>s;
    void (*ptr)(char p[]);
    ptr=printname;
    ptr(s);
    
   return 0;  
} 
