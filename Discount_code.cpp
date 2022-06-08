#include<iostream>
using namespace std;

int main() 			
{
	float amount,discount=0;
	cout<<"Enter Shopping Amount  :";
	cin>>amount;
	
    if(amount>=5000)
    {
        discount=20;
    }
    else if(2000<=amount && amount<5000)
    {
        discount=10;
    }
    else
    {
        discount=5;
    }
    
    discount=(discount/100)*amount;
	cout<<"Discounted Amount : "<<discount;
	return 0;

}
