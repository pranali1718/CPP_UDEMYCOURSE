//code of cube ,taking value form user//

#include<iostream>
using namespace std;

class cube
{
    public:
    int side;
    cube()
    {
        cout<<"Enter the Number to find the cube :";
        cin>>side;
    }
};

int main()
{
    cube c;
    cout<<"side : "<<c.side<<endl;
    cout<<"Cube : "<<c.side*c.side*c.side<<endl;
    
    return 0;
}

////code of cube ,having fix value//

#include<iostream>
using namespace std;

class cube
{
    public:
    int side;
    cube()
    {
        side=3;
    }
};

int main()
{
    cube c;
    cout<<"side : "<<c.side<<endl;
    cout<<"Cube : "<<c.side*c.side*c.side<<endl;
    
    return 0;
}
