/*Write a Program to find the position of an element in a 2d array or Matrix..*/

#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"enter size of row : ";
    cin>>row;
    cout<<"etner the size of col : ";
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
    
    cout<<"Enter The Element You want to find in Matrix : \n";
    cin>>element;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(element ==a[i][j])
            {
                temp=1;
            }
        }
    }
    
    if(temp ==1)
    {
        cout<<"Element is present ";
    }
    else
    {
        cout<<"Element not found" ;
    }
    
} 
