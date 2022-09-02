#include<iostream>
using namespace std;
    
class Car
{
    public:
	virtual void start()
	{
		cout<<"Car Started"<<endl;
	}
	
};
    
class Innova:public Car
{
    public:
	void start()
	{
		cout<<"Innova Started"<<endl;
	}
	
};
    
class Swift:public Car
{
    public:
	void start()
    {
		cout<<"Swift Started"<<endl;
	}
	
};
    
int main()
{
    Car *ptr,*ptr1;
    Innova i;
    Swift s;
    ptr=&i;
    ptr1 =&s;
	//Car *ptr=new Innova();
	ptr->start();
	
	//ptr=new Swift();
	ptr1->start();
	    
}
