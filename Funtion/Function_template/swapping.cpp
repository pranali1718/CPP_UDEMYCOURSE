#include <iostream>
using namespace std;
template<typename T>
int swapping( T &str1 , T &str2 )
{   
   // cout<<"Before swap \n"<<"a="<<&h<<"\tb="<<&j;
    T temp;
    temp= str1;
    str1=str2;
    str2=temp;
   // cout<<"\nAfter swap \n"<<"a="<<&h<<"\tb="<<&j;
    return 0;
}

int main()
{   
    string str1 ="ball", str2 ="bat";
    cout<<"Before swap \n"<<"string1="<<str1<<"\tstring2="<<str2;
    swapping(str1,str2);
    cout<<"\nAfter swap \n"<<"string1="<<str1<<"\tstring2="<<str2;
    return 0;
}
