/*******************************************************************************************
                      access private function
********************************************************************************************/
#include <iostream>
using namespace std;

class Sample
{
    private:
    void read();
    
    public:
    void write();
    void show();
};


void Sample :: write()
{
    cout<<"I am writer  \n";
    read();
}

void  Sample :: show()
{
    cout<<"I am Showing \n";
}

void Sample :: read()
{
    cout<<"I am reader \n";
}

int main()
{
    Sample s;
    s.write();
    s.show();
    return 0;
}
