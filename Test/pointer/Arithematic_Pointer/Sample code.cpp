#include <iostream>
using namespace std;


int main ()
{
   int  var[3] = {10, 100, 200};
   int  *ptr,*test;
   ptr=var;
   test=&var[2];
   for(int i=0;i<3;i++)
   {
        cout<<"address of "<<var[i]<<" is "<<"[" <<i<<"]"<<ptr++<<endl;
   }
   
   cout<<endl;
   
   for(int i=2;i>=0;i--)
   {
       cout<<"address of "<<var[i]<<" is "<<"[" <<i<<"]"<<test--<<endl;
   }
   return 0;
}
