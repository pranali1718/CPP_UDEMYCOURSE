/*

here I used pointer arithematic 

In this code, I used pointer arithematic "ptr++ & ptr--".

this used for move the pointer to the next memeory location,while moving 
it cant get impact on the actual memeory location

ptr=var, this means in pointer we are going to store the address of array var[], 
            by defualt it takes the address of 1st element of the array

*/

#include <iostream>
using namespace std;

int main ()
{
   int  var[3] = {10, 100, 200};                            //declaring array
   int  *ptr,*test;                                         ///declaring pointer
   ptr=var;                                                 //storing the address
   test=&var[2];                                            //storing the address of var[2];
   
   for(int i=0;i<3;i++)                                     //for loop for printing address serially
   {
        cout<<"address of "<<var[i]<<" is "<<"[" <<i<<"]"<<ptr++<<endl;
   }
   
   cout<<endl;
   
   for(int i=2;i>=0;i--)                                    //for loop for printing the address in reverse order
   {
       cout<<"address of "<<var[i]<<" is "<<"[" <<i<<"]"<<test--<<endl;
   }
   return 0;
}
