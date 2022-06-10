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


//discounted amount

#include<iostream>
using namespace std;

int main()
{
    float billAmount;
    float discount=0.0;

    cout<<"Enter Bill Amount:";
    cin>>billAmount;
        
    if(billAmount>=500)
    {
    	discount=billAmount*20/100;
    }
    else if(billAmount>=100 && billAmount<500)
    {   
        discount=billAmount*10/100;
    }
    billAmount=billAmount-discount;
    cout<<"Discount is :"<<discount<<endl;
    cout<<"Discounted Amount is:"<<billAmount<<endl;
        
    return 0;
        
}
