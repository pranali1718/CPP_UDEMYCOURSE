//caclulator using functions
#include <iostream>

using namespace std;

int add(int x,int y)
{   
    int z;
    z=x+y;
    cout<<"Add:"<<z<<endl;
    return 0;
}

int sub(int x,int y)
{
    int z;
    z=x-y;
    cout<<"Sub:"<<z<<endl;
    return 0;
}

int mul(int x,int y)
{   
    int z;
    z=x*y;
    cout<<"Mul:"<<z<<endl;
    return 0;
}

int Div(int x,int y)
{   
    int z;
    z=x/y;
    cout<<"Div:"<<z<<endl;
    return 0;
}
int main()
{
    add(4,6);
    sub(10,5);
    mul(4,4);
    Div(10,5);
}



///////////////////////////with arguments with return type///////////


#include <iostream>

using namespace std;

int add(int x,int y)
{   
    return x+y;
}

int sub(int x,int y)
{
    return x-y;
}

int mul(int x,int y)
{   
    return x*y;
}

int Div(int x,int y)
{   
    return x/y;
}
int main()
{
    cout<<"DIV : "<<Div(10,5)<<endl;
    cout<<"MUL : "<<mul(4,4)<<endl;
    cout<<"SUB : "<<sub(10,5)<<endl;
    cout<<"ADD : "<<add(4,6);

}
