#include <iostream>
using namespace std;

class geeks 
{
	const char* p;
	int *a;

public:
	geeks()
	{
		p = new char[0 ];
		p = "geeks";
		a = new int;
		*a = 89;
		cout<<p<<" " <<*a<<endl;
	}
};

int main()
{
	geeks obj;
}
