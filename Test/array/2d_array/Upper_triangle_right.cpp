#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"enter size of row : ";
    cin>>row;
    cout<<"enter the size of col : ";
    cin>>col;
    int a[row][col];
    cout<<"Row : "<<row<<endl;
    cout<<"Col : "<<col<<endl;
    int element,temp=0;
    
    cout<<"Enter the Elements of Array : ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Array Elements are : \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
    
    cout<<"Pattern :\n";
    for(int i=0;i<row;i++)
    {
        for(int k=0;k<i;k++)
        {
            cout<<"   ";#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"enter size of row : ";
    cin>>row;
    cout<<"enter the size of col : ";
    cin>>col;
    int a[row][col];
    cout<<"Row : "<<row<<endl;
    cout<<"Col : "<<col<<endl;
    int element,temp=0;
    
    cout<<"Enter the Elements of Array : ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Array Elements are : \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
    
    cout<<"Pattern :\n";
    for(int i=0;i<row;i++)
    {
        for(int k=0;k<i;k++)
        {
            cout<<"   ";
        }
        for(int j=i;j<col;j++)
        {
            cout<<a[i][j]<<"  ";
        }
    cout<<endl;
    }
} 
        }
        for(int j=i;j<col;j++)
        {
            cout<<a[i][j]<<"  ";
        }
    cout<<endl;
    }
} 
