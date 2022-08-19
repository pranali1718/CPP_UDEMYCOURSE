/*here I passed the address of value to the function "add(&a,&b);"

in fun 
    void add(int *x,int *y) is ready to recieve that address n accept the value whihc present at that address and performs the addtion\
    */



#include <iostream>
using namespace std;

void maximum(int *x,int *y)                    
{
   if(*x>*y)
   {
       cout<<"maximum is : "<<*x;
   }
   else
   {
       cout<<"Maximum is : "<<*y;
   }
}          
int main()
{
    int a,b;
    cout<<"Enter Two Number : ";
    cin>>a>>b;
    maximum(&a,&b);                             //passing the address of varibles
    
    return 0;
}
