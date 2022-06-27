#include<iostream>
using namespace std;

template< typename T>
T add(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<add(10,7)<<endl;
    cout<<add(5.5,6.7);
    return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) 
{
  return a+b;
}
int main ()
{
  int i=5, j=6;
  float s=1.8,n=9.0;
  long l=10, m=50;
  cout << add<int>(i,j) << endl;
  cout << add<float>(s,n) << endl;
  cout << add<long>(l,m) << endl;
  return 0;
}





































                                                                                                                                                                                                                                                        
