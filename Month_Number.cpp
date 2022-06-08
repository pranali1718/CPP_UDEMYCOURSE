//using Switch CASE

#include<iostream>

using namespace std;

void MonthName(int m)
{
    
    switch (m)
    {
        case 1: cout<<"jan"; break;
        case 2: cout<<"feb"; break;
        case 3: cout<<"mar"; break;
        case 4: cout<<"apr"; break;
        case 5: cout<<"may"; break;
        case 6: cout<<"jun"; break;
        case 7: cout<<"jul"; break;
        case 8: cout<<"aug"; break;
        case 9: cout<<"sept"; break;
        case 10: cout<<"oct"; break;
        case 11: cout<<"nov"; break;
        case 12: cout<<"dec"; break;
        default:
        cout<<"Invalid month Number";
    }
    
}
int main()
{   
    int m;
    cout<<"Enter The Month Number :";
    cin>>m;
    MonthName(m);
}



//Using ifelse ladder
/*
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
    cout<<"Enter The Month Number :";
    cin>>m;
    MonthName(m);
}
*/


