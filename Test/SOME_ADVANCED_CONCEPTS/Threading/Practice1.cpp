/**********************************************************************************************
 * Threading in c++
 * thread - thread is lighweight process that needs only few resources.
 *  
 * 
 * Porgram for passing value to function
**********************************************************************************************/

#include<iostream>
#include<thread>

using namespace std;

void fun(int a)
{
    cout<<"Multithreading Program,";
    cout<<endl<<"Value of a is : "<<a;
}

int main()
{
    thread t1(fun,5);
    t1.join();
    return 0;
}



























