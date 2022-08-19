/*Write a program to print the value of the address of the pointer to a variable whose value is input from user.*/

#include <iostream>
using namespace std;

void fun(int *p)
{
    cout<<endl<<"value Enter By You Is : "<<*p;                 //dereferencing 
}

int main()
{
    int a; 
    cout<<"Enter Number :";
    cin>>a;

    cout<<"Address of "<< a<<" is : "<<&a;                       //print address of int
    fun(&a);
    return 0;
}
-----------------------------------------------------------------------------------------------------------------------------
    
    /*Write a program to print the value of the address of the pointer to a variable whose value is input from user.*/

#include <iostream>
using namespace std;
            
void fun()                                                  //function
{
    int a,*p; 
    cout<<"Enter Number :";
    cin>>a;
    p=&a;
    cout<<"Address of "<< a<<" is : "<<p<<endl;             //print address of int
    cout<<"value Enter By You Is : "<<*p;                 //dereferencing 
}

int main()
{
    fun();
    return 0;
}
