/*
Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. 
Now, create a function in each of these classes which prints "I am mammal", "I am a marine animal" and "I belong to both the categories: 
Mammals as well as Marine Animals" respectively. Now, create an object for each of the above class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale
*/

#include <iostream>
using namespace std;

class mammels
{
    public:
    void fun()
    {
        cout<<"I am Mammel\n";
    }
};

class marine_animals
{
    public:
    void fun1()
    {
        cout<<"I am Marine Animal \n";
    }
};

class bluewhale : public mammels,public marine_animals
{
    public:
    
    void funb()
    {
        cout<<"I belongs to both \n";
    }
};

int main()
{
    mammels m;
    marine_animals ma;
    bluewhale b;
    m.fun();
    ma.fun1();
    b.funb();
    b.fun();
    b.fun1();
    
    return 0;
}
