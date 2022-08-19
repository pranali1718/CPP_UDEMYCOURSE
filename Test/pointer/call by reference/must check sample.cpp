/*here I passed the address of value to the function "add(&a,&b);"

in fun 
    void add(int *x,int *y) is ready to recieve that address n accept the value whihc present at that address and performs the addtion\
    */



#include <iostream>
using namespace std;

void add(int *x,int *y)                     //add fun having pointer x & y receives the value at the address of a and b
{
    cout<<"Add stor at x :"<<x<<endl;                          //address of a 
    cout<<"Addition is : "<<*x+*y;          // perform Addition
}
int main()
{
    int a,b;
    cout<<"Enter Two Number : ";
    cin>>a>>b;
    cout<<"add a :"<<&a<<endl;
    add(&a,&b);                             //passing the address of varibles
    
    return 0;
}
