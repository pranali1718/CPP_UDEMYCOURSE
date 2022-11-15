/**********************************************************************************************
 * Threading in c++
 * thread - thread is lighweight process that needs only few resources.
 *  
 * Program for passing value by reference 
 * but in threading while passing the value have to mention manually the ref()  
**********************************************************************************************/

#include<iostream>
#include<thread>

using namespace std;

void fun(int &a,int b)
{
    cout<<"Multithreading Program";
    cout<<endl<<"Value of a is : "<<++a<<endl<<"value of b is :"<<b;
}

int main()
{
    int local_value = 90;
    thread t1(fun,ref(local_value),100);
    t1.join();
    return 0;
}
