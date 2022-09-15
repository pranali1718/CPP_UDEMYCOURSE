/************************************************************************************
                            Exception Handling
                            
1.three keywords use
    try
    catch
    throw
2.Multiple catch statments allows ,depnding on the number of errors.
3.1st check error then throw exception and then catch it .
4. WHen exception Handling occurs
    when new keyword is not allocating memeory
    division by zero
    invalid function argument etc.
************************************************************************************/


#include<iostream>
using namespace std;

int main()
{
    int money;
    
    cout<<"Enter Ampunt you wanna deposit : ";
    cin>>money;
    
    try
    {
        if(money > 0)
        {
            cout<<"Succesfully deposited..... ";
        }
        else
        {
            throw(money);
        }
    }
    catch(int n)
    {
        cout<<"You entered negavtive value....";
    }
  return 0;
}
