
#include <iostream>
using namespace std;

int main() 
{
    int size,temp;
    
    cout<<"Enter size :";
    cin>>size;
    
    char *cp=new char[size];
    
    cout<<"Enter Charaters :";
    for(int i=0;i<size;i++)
    {
        cin>>cp[i];
    }
    
    cout<<"Entered charaters : ";
    for(int i=0;i<size;i++)
    {
        cout<<*(cp+i)<<" "<<" ";
    }
    
    cout<<"\nSorted charaters : ";
    for(int i=0 ; i<size ;i++ )
    {
        for(int j=0 ; j<size-1 ; j++)
        {
            if(cp[j]>=cp[j+1])
            {
                temp = cp[j];
                cp[j] = cp[j+1];
                cp[j+1] = temp;
            } 
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<cp[i]<<" ";
        //cout<<(cp+i)<<" ";
    }
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<(int*)cp[i]<<endl;
    }
    
    delete(cp);
    return 0;
}
