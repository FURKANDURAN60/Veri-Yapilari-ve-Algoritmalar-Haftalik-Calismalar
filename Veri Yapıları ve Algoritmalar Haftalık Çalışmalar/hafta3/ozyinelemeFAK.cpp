#include <iostream>

using namespace std ; 

int faktoriel(int n)
{
    if(n == 0)
        return 1 ; 
    else
        return n * faktoriel(n-1);
}


int main()
{
    int n ; 

    cin>> n  ;

    cout<< n <<" ! = " << faktoriel(n) << endl  ;
    return 0  ; 
}