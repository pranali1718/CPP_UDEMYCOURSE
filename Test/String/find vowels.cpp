#include <iostream>
#include <cstring>
using namespace std;
// a,e,i,o,u//
int main()
{
    int i;
    string a="hello good morning public" ;
    cout<<"size :"<<a.length()<<endl;
    int temp=0,count =0,space=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i] == 'a' || a[i]=='e' || a[i]=='i' || a[i]=='o' ||  a[i]=='u'||
           a[i] == 'A' || a[i]=='E' || a[i]=='I' || a[i]=='O' ||  a[i]=='U')
        {
            temp++;
        }
        else if((a[i]>='a'&& a[i]<='z') || (a[i]>='A'&& a[i]<='Z'))
        {
            count++;
        }
        else if(a[i]==' ')
        {
            space++;
        }
    }
    cout<<"vowels :"<<temp<<endl;
    cout<<"consonants :"<<count<<endl;
    cout<<"space :"<<space;
    return 0;
}
