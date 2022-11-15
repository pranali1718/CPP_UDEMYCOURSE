/**********************************************************************************************
 * Threading in c++
 * thread - thread is lighweight process that needs only few resources.
 *  
 * 
 * Porgram for passing local value to function
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
    int local_value = 90;
    thread t1(fun,local_value);
    t1.join();
    return 0;
}
