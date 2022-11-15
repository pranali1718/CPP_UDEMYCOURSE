/**********************************************************************************************
 * Threading in c++
 * thread - thread is lighweight process that needs only few resources.
 *  
 * 
 * here i used & for reference of the all the local values in main thread for access them.
**********************************************************************************************/

#include<iostream>
#include<thread>

using namespace std;

int main()
{
    int num1 = 100,num2 = 50;

    thread t1([ & ]()
    {
        cout<<"Threading"<<endl;
        cout<<++num1<<endl;
        cout<<++num2<<endl;

    });


    t1.join();

    return 0;
}
