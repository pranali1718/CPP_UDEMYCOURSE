
#include <iostream>

using namespace std;

int main()
{
    for(int i=0;i<5;i++)
    {
        cout<<"i : "<<i<< " : "<<"in  1st loop \n";
        cout<<"-------------------------------------"<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<"j :"<<j<< " : "<<"in  2nd loop \n";
        }
        cout<<"-------------------------------------"<<endl;
    }
    cout<<"\nend";

    return 0;
}
