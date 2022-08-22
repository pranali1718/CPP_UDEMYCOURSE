/*in this code ,at main addtion function passing the values[add(x,y);] and function
while receving at function the address of another varibale are ready to
recevies the values[void add(int &p,int &q)]

*/
#include<iostream>
using namespace std;

void add(int &p,int &q)
{
    cout<<"add is :"<<p+q;
    
}

int main()
{
    int x=2,y=2;
    add(x,y);
    return 0;
    
}

