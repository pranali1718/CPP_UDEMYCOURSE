#include<iostream>
using namespace std;

int main()
{
    int b[5]={1,2,3,4,5},*ip;                       //int array & int pointer
    char a[5]={'s','d','k','p','e'},*cp;            //char array & char pointer
    
    ip=b;                                           //int pointer =int array address
    cp=a;                                           //char pointer =char array address
    
    cout<<b[2]<<endl;                               //print int value
    cout<<*(ip+3)<<endl;                            //print int value using pointer
    cout<<a[2]<<endl;                               //print char value
    cout<<*(cp+3);                                  //print char value using pointer
    
    return 0;
}
