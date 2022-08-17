#include <iostream>
using namespace std;

int main()
{
    int a[3][3]={{2,3,4},{3,4,6},{5,6,7}};
    int b[3][3]={{2,2,4},{1,1,9},{4,10,1}};
    int max=a[0][0];
    int max1=b[0][0];
    cout<<"matrix 1 is :\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
    }
    cout<<"max 1 arrat :"<<max;
    
    cout<<"\nmatrix 2 is :\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(b[i][j]>max1)
            {
                max1=b[i][j];
            }
        }
    }
    cout<<"\nmax array 2 is :"<<max1;
    cout<<endl;
    if(max>max1)
    {
        cout<<"max among array is :"<<max;
    }
    else
    {
        cout<<"max among both array is : "<<max1;
    }
}
