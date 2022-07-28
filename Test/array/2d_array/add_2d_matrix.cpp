#include <iostream>
using namespace std;

int main()
{
    int row,col,row1,col1;
    int row2,col2;
    cout<<"Enter size of rows for 1st array :";
    cin>>row;
    cout<<"Enter size of col 1st array :";
    cin>>col;
    cout<<"row :"<<row<<endl;
    cout<<"Col :"<<col<<endl;
    
    int a[row][col];
    cout<<"Enter the Elements for 1st array: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"1st Array Elements are :"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Enter size of rows for 2nd array :";
    cin>>row1;
    cout<<"Enter size of col for 2nd array :";
    cin>>col1;
    cout<<"row :"<<row1<<endl;
    cout<<"Col :"<<col1<<endl;
    
    int b[row1][col1];
    cout<<"Enter the Elements for 2nd array: "<<endl;
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"2nd Array Elements are :"<<endl;
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    if(row>row1 && col>col1)
    {
        row2=row;
        col2=col;
    }
    else
    {
        row2=row1;
        col2=col1;
    }
    int c[row2][col2];
    cout<<"Row for 3rd matxrix :"<<row2<<endl;
    cout<<"Col for 3rd matrix : "<<col2<<endl;
    
    
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            //cout<<"pp :"<<c[i][j]<<endl;
        }
    }
    cout<<"Addition of Matrix :"<<endl;
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
    
}
