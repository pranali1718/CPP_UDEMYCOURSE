#include<iostream>
#include<thread>

using namespace std;

void fun()
{
    for(int i=0;i<10;i++)
    {
        cout<<i<<endl;
    }
}

int main()
{
    thread t(fun);
    t.join();
}
