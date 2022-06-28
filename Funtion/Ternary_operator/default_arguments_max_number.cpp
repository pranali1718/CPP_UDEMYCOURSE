#include <iostream>
using namespace std;
int max(int a=0,int b=0,int c=0,int d=0)
 {
     return a>b && a>c && a>d ? a : (b>c && b>d ? b : c>d ? c : d);
 }
 
 int main()
 {
     cout<<max()<<endl;
     cout<<max(10)<<endl;
     cout<<max(1,2)<<endl;
     cout<<max(4,5,6)<<endl;
     cout<<max(9,11,8,80);
 }
