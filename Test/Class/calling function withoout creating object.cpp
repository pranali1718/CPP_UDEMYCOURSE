/*Print the average of three numbers entered by the user by creating a class named 'Average' having 
a function to calculate and print the average without creating any object of the Average class.*/


#include <iostream>
using namespace std;

int n1,n2,n3;
class Average                                                     //class 
{       
    public: 
    
    static int fun_avg()
    {
      int avg;
      avg=(n1+n2+n3)/3;
        return avg;
    }
    
};

int main()
{
    cout<<"Enter Three Numbers :";
    cin>>n1>>n2>>n3;
    cout<<"Average is : "<<Average :: fun_avg();
    return 0;
}
