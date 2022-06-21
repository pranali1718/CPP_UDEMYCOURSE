#include <iostream>

using namespace std;

int main()
{
    string food="pizza";
    cout<<food<<endl;               //prints the food (pizza)
    cout<< &food<<endl;             //prints the address of food(0x7ffd377e81a0)
    string* ptr=&food;              //assign pointer to ptr which stores the address of food
    cout<<ptr;                      //prints the address of food    
    return 0;
}
