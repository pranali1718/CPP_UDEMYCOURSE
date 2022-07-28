/*
user input 2d Array
*/

#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"Enter size of rows :";
    cin>>row;
    cout<<"Enter size of col :";
    cin>>col;
    cout<<"row :"<<row<<endl;
    cout<<"Col :"<<col<<endl;
    
    int a[row][col];
    cout<<"Enter the Array Elements : "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Array Elements are :"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}
