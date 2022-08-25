/*in htis code i used command line argument 
where  argc =no of argument counts
        argv = holds the no. of arguments
    
    
SYNTAX:
    int main(int argc,char* argv[])
    
    use in virtual box 
*/
#include<iostream>
using namespace std;

void fun(void)
{
	cout<<"In function\n";
}
int main(int argc,char* argv[])
{
	cout<<argc<<endl;
    cout<<argc[0]<<endl;
	cout<<argc[1]<<endl;
	cout<<argc[2]<<endl;
	
/*	for (int i=0;i<argc;i++)
	{
		cout<<argv[i]<<endl;
	}
*/

	fun();
	return 0;
}
