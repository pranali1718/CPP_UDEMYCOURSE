/*Matrix Multiplication

if there is multiplication of different dimensional array 
then the size of col of 1st array and size of row of 2nd array must be same
*/

#include<iostream>
using namespace std;

int main()
{
    int row1,col1,row2,col2;
    int row,col;

    cout<<"Enter No. row of 1st Matrix :";
    cin>>row1;
    cout<<"Enter No. col of 1st Matrix :";
    cin>>col1;
    cout<<"Rows of 1st Matrix:"<<row1<<endl;
    cout<<"Cols of 1st Matrix :"<<col1<<endl;

    int a[row1][col1];
    cout<<"Enter elements for Matrix  1:";
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix 1st elemts are :"<<endl;
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter No. row of 2nd Matrix :";
    cin>>row2;
    cout<<"Enter No. col of 2nd Matrix :";
    cin>>col2;
    cout<<"Rows of 2nd Matrix:"<<row2<<endl;
    cout<<"Cols of 2nd Matrix :"<<col2<<endl;

    int b[row2][col2];
    cout<<"Enter elements for Matrix  2: ";
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Matrix 2nd elemts are :"<<endl;
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    if(row1>row2 && col1>col2)
    {
        row=row1;
        col=col1;
    }
    else
    {
        row=row2;
        col=col2;
    }

    int c[row][col];
    cout<<"Row of 3rd martix : "<<row<<endl;
    cout<<"Cols of 3rd matrix : "<<col<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j]=a[i][j]*b[i][j]+a[i][j]*b[i][j];
        }
    }
    cout<<"Multiplication of Both Matrix :"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<c[i][j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}

