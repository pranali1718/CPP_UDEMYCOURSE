// Addition code using SWITCH Case
//Menudriven code

#include<iostream>

using namespace std;

int main()
{
    int a,b,n;
    cout<<"1.Addition\n2.Substraction \n3.Multiplcation\n4.Division\n";
    cout<<"Enter Your Choice :";
    cin>>n;
    cout<<"Enter Number :";
    cin>>a>>b;
    switch(n)
    {
        case 1:
            cout<<"Addition is :"<<a+b;
            break;
        case 2:
            cout<<"Substraction is :"<<a-b;
            break;
        case 3:
            cout<<"Multiplcation is :"<<a*b;
            break;
        case 4:
            cout<<"Division is :"<<a/b;
            break;
        default :
            cout<<"Invalid Choice";
        
    }
    return 0;
    
    
    
    //ADDITION CODE USING FUNCTION//
    
    #include<iostream>

using namespace std;

void ArithOpt()
{
    int x, y,choice;
    cout<<"1.add\n2.sub\n3.mul\n4.div\n";
    cout<<"Enter your choise:";
    cin>>choice;
    cout<<"Enter Number :";
    cin>>x>>y;
    switch(choice)
    {
        case 1 :
            cout<<"ANS:"<<x+y;
            break;
        case 2 :
            cout<<"ANS:"<<x-y;
            break;
        case 3 :
            cout<<"ANS:"<<x*y;
            break;
        case 4 :
            cout<<"ANS:"<<x/y;
            break;
    }
}
int main()
{
    
    ArithOpt();
    return 0;
}


}
