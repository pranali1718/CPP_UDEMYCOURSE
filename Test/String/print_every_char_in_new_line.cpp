/*Write a program to print every character of a string entered by user in a new line using loop.*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cout<<"enter string :";
    getline(cin,a);
    cout<<a;
    for(int i=0;i<a.length();i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}
