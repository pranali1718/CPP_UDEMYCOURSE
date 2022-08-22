{   
    int a,*ip;
    ip=&a;
    cout<<"ip : "<<ip<<endl;
    cout<<"int : "<<( int *)ip<<endl;
    cout<<"void : "<<( void *)ip<<endl;
    cout<<"float : "<<( float *)ip<<endl;
    cout<<"char : "<<( char *)ip<<endl;                   //not able to use it
    return 0;
}
