/*
Write a program in C to demonstrate how to handle the pointers in the program.

Address of m : 0x7ffcc3ad291c
 Value of m : 29
 
 Now ab is assigned with the address of m.                                                                    
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 29
 
 The value of m assigned to 34 now.                                                                           
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 34
 
 The pointer variable ab is assigned with the value 7 now.                                                    
 Address of m : 0x7ffcc3ad291c                                                                                
 Value of m : 7 
*/

#include<iostream>
using namespace std;

int main()
{
    int m=29,*ab;
    
    ab=&m;
      
    cout<<"Address of m : "<<&m<<endl;
    cout<<"Value of M is : "<<m<<endl;
    cout<<endl;
    
    cout<<"Address of pointer ab : "<<&ab<<endl;
    cout<<"Value in ab is : "<<*ab<<endl;
    cout<<endl;
    
    m=39;
    cout<<"Address of pointer ab : "<<&ab<<endl;
    cout<<"Value in ab is : "<<*ab<<endl;
    cout<<endl;
    
    *ab=7;
    cout<<"Address of m : "<<&m<<endl;
    cout<<"Value of M is : "<<m<<endl;
    return 0;
}







