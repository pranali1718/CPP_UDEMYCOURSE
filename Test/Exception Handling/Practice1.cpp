/************************************************************************************
                            Exception Handling
************************************************************************************/
#include<iostream>
using namespace std;

int main()
{
    int age;
    
    cout<<"Enter Your Age : ";
    cin>>age;
    
    try
    {
        if(age >= 18)
        {
            cout<<"You can access this ..... ";
        }
        else
        {
            throw(age);
        }
    }
    catch(int n)
    {
        cout<<"Access denied....";
    }
}
