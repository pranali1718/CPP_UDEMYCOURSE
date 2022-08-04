/*Write a program to input and display the sentence I love candies.*/

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
