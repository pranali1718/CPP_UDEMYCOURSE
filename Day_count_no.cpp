//using switch case//

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter Number :";
    cin>>a;

    switch(a)
    {
        case 1:
            cout<<"sun";
            break;
        case 2:
            cout<<"mon";
            break;
        case 3:
            cout<<"tue";
            break;
        case 4:
            cout<<"wed";
            break;
        case 5:
            cout<<"thu";
            break;
        case 6:
            cout<<"fri";
            break;
        case 7:
            cout<<"sat";
            break;
    }
            
    return 0;
        
}

// using If else ladder

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    if(n==1)
    {
        cout<<"Monday";
    }
    else if(n==2)
    {
        cout<<"Tuesday";
    }
    else if(n==3)
    {
        cout<<"Wed";
    }
    else if(n==4)
    {
        cout<<"Thu";
    }
    else if(n==5)
    {
        cout<<"Fri";
    }
    else if(n==6)
    {
        cout<<"Sat";
    }
    else
    {
        cout<<"Sun";
    }
    return 0;
}




