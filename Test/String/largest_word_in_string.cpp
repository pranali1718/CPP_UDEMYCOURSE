/*
Write a C++ program to find the largest word in a given string. Go to the editor
Example:
Sample Input: C++ is a general-purpose programming language.
Sample Output: programming
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    string a="i am pranali mahale";
    cout <<a<<endl;
    int b=a.length();
    int temp=0;
    int count=0;
    for(int i=0;i<b;i++)
    {
        if(a[i] != ' ')
        {
            temp++;
                            
            if(temp>count)
            {
                count=temp;
            }
        }
        else
        {
            temp=0;
        }
        
    }
    
    cout<<"count :"<<count;
    return 0;
}
