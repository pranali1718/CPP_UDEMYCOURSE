/*
String:
1.input String
2.cout String
3.length of String
4.compare word with space

*/

#include<iostream>
using namespace std;

int main( )
{
    string a;
    int word=1;
    //char a[50];
    cout<<"ENter string :";
    getline(cin,a);
    
   //cin.getline(a,5);
    for(int  i=0; i<a.length();i++)          //checking input word by word   
    {
        if(a[i]==' ')                       //compare word with space
        {
            word++;                             //couting space 
        }
    }
    cout<<"w : "<<word<<endl;                   
    
    cout<<a;

    return 0;
}
