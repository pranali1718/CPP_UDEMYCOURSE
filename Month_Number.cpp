#include<iostream>

using namespace std;

void MonthName(int m)
{
    if(m==1)
        cout<<"jan";
    else if(m==2)
        cout<<"feb";
    else if(m==3)
        cout<<"mar";
     else if(m==4)
        cout<<"apr";
     else if(m==5)
        cout<<"may";
     else if(m==6)
        cout<<"jun";
     else if(m==7)
        cout<<"jul";
     else if(m==8)
        cout<<"aug";
     else if(m==9)
        cout<<"sept";
     else if(m==10)
        cout<<"oct";
     else if(m==11)
        cout<<"nov";
     else if(m==12)
        cout<<"dec";
    else
    {
        cout<<"Invalid month Number";
    }
}
int main()
{   
    int m;
    cout<<"enter the month";
    cin>>m;
    MonthName(m);
}
