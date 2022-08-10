
int main()
{   
    string a=" I am Pranali ";
    char key;
    int temp=0;
    cout<<"Array is : ";
    for(int i=0;i<20;i++)
    {
        cout<<a[i];
    }
    cout<<"\nEnter word you want to find : ";
    cin>>key;
    for(int i=0;i<7;i++)
    {
        if(a[i]==key)
        {
            temp=1;
            cout<<"found at :"<<i;
            break;
        }
        else
        {
            cout<<"not found";
            break;
        }
    }
   /* if(temp==1)
    {
        cout<<"element found ";
    }
    else
    {
        cout<<"not found";
    }*/
    
    return 0;
}
