/* Write a program to store 5 elements in an array and print the elements using pointer.
 
 here i store elements in array using pointer *ptr[i]
 */

#include <iostream>
using namespace std;

int main()
{
    int *ptr[5];
    int a[5];
    cout<<"Enter Elements : ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<5;i++)
    {
        ptr[i]=&a[i];
    }
    
    for(int i=0;i<5;i++)
    {
        cout<<*ptr[i]<<" ";
    }
    return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int main()
{
    int a[5],*ptr;                                          //int array & int pointer
    ptr=a;                                                  //assigning address to pointer
    
    cout<<"Enter 5 elemets :";                              
    for(int i=0;i<5;i++)
    {
        cin>>ptr[i];                                        //storing array elemets in pointer
        ptr[i]=a[i];                                        //assigning array elemets to pointer address    
    }
    cout<<endl;
    for(int i=0;i<5;i++)                                    
    {
        cout<<"Address of "<<a[i]<<" is "<<&ptr[i]<<" "<<endl;                //printing array elements & address of that elements
    }
    return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------------
 
 #include<iostream>
using namespace std;

int main()
{
    int a[5],*ptr;                                          //int array & int pointer
                                                      //assigning address to pointer
    
    cout<<"Enter 5 elemets :";                              
    for(int i=0;i<5;i++)
    {
        cin>>a[i];                                       
    }
    cout<<endl;
    ptr=a;
    for(int i=0;i<5;i++)                                    
    {
        cout<<"Address of "<<a[i]<<" is "<<&ptr[i]<<" "<<endl;                //printing array elements & address of that elements
    }
    return 0;
}



