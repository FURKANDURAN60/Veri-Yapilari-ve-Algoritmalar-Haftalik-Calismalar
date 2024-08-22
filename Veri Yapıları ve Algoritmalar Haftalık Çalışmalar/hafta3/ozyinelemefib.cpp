#include <iostream>

using namespace std ; 

int fibo(int n)
{
    if(n>2)
        return fibo(n-1) + fibo(n-2)  ;
    else
        return 1  ;
    
}

int main()
{
    int fibos  ;

    cout<<"fibo istedigin sayiyi gir  : "<<endl  ;
    cin>> fibos ; 

    cout<< fibo(fibos) ;  

    return 0  ;
}