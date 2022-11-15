/**********************************************************************************************
 * Threading in c++
 * thread - thread is lighweight process that needs only few resources.
 *  
**********************************************************************************************/

#include<iostream>
#include<thread>

using namespace std;

void fun()
{
    cout<<"Multithreading Program,";
}

int main()
{
    thread t1(fun);
    t1.join();
    return 0;
}



























