#include <iostream>
#include <thread>
#include <mutex>

using namespace std;
mutex m; 
int i=0;
void add()
{
    for (int i = 0; i < 10; i++)
    {
        m.lock();
        cout << i << endl;
        cout<<"Program"<<endl;
    }
}

int main()
{
    thread t(add);
    thread t1(add);

    t.join();
    t1.join();


    return 0;
}
