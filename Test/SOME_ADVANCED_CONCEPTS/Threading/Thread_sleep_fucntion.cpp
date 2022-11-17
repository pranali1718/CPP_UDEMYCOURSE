/*************************************************************************************
 * in this code i use sleep function for thread
 * 
 * syntax:
 *      this_thread::sleep_for(chrono::milliseconds(Time_IN_Milisecond) );
 * 
 * 
*************************************************************************************/


#include<iostream>
#include<thread>

using namespace std;

void fun()
{
    for(int i=0;i<10;i++)
    {
        cout<<i<<endl;
        this_thread::sleep_for(chrono::milliseconds(2000) );
        
    }
}

int main()
{
    thread t(fun);
    thread t1(fun);
    t.join();
    
    t1.join();
}
