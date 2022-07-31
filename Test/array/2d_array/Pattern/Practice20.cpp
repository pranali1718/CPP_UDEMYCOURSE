/*#include<iostream>
using namespace std;
int m;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=0;j<5;j++)
        {
            //cout<<((i+j)%2)<<" ";
            m = ((i+j)%2);
            if(i%2 == 0)
            {
                m = m*0;
            }
            cout<<m<<" ";
        }
        
        cout<<endl;
    }               
    return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<((i*j)%2)<<" ";
        }
        
        cout<<endl;
    }               
    return 0;
}
