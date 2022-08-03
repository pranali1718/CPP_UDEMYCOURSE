/*Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space.

here used cctypemlibrary which has the toupper() function 
which helps automatically convert small leteer to upper case*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    string a="i am pranali jagdish mahale . i am affu";
    cout <<a<<endl;
    int b=a.length();
    for(int i=0;i<b;i++)
    {
        if( i==0)
        {
            a[i]=toupper(a[i]);
        }
        else if(a[i-1]==' ')
        {
            a[i]=toupper(a[i]);
        }
    }
    
    cout<<"\nCapitalize string :"<<endl;
    cout<<a;
    return 0;
}
