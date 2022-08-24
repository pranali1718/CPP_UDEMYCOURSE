#include <iostream>
using namespace std;

int main()
{
    int *p=new int;                                             //dynamically assign memeory for int
    float *fp=new float;                                        //dynamically assign memeory for float
    
    *p=98;                                                      //int = value
    *fp=9.4;                                                    //float = value
    
    cout<<"Int : "<<*p<<endl;                                   //print integer address
    cout<<"Add Int  : "<<p<<endl;                               //print integer value
    cout<<"Float : "<<*fp<<endl;                                //print float address
    cout<<"Add float : "<<fp;                                   //print float value   
    
    delete(p);                                                 //delete int memeory
    delete(fp);                                                //delete float memeory
    
    cout<<endl;
    cout<<*p;                                                   //printing zero value after deletion
    
    *p=77;                                                      //assignning new value to the int pointer
    cout<<endl<<*p;                                             //printing the newly assign value
    return 0;
}
