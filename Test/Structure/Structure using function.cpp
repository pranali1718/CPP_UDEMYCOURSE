/*here i starting structure code
    in structure by defualt everything is public
    we have to create an object of structure
*/

#include<iostream>
using namespace std;

struct people
{
    string name;
    int age;
    void display()
    {
        cout<<name<<" "<<age;
    }
    
};
int main()
{
    people p;
    p.name="pranali";
    p.age=22;
    p.display();
}
