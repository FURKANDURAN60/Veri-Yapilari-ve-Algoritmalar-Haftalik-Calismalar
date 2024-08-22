#include <iostream>
#include <stack>

using namespace std  ;

int main()
{
    stack<int> sayilar1 ;

    for(int i = 0  ; i <=5  ; i ++)
    {
        sayilar1.push(i*10) ; 
    }

    stack<int> sayilar2  ; 

    while(!sayilar1.empty())
    {
        sayilar2.push(sayilar1.top()) ; 
        sayilar1.pop() ;  
    }

    while(!sayilar2.empty())
    {
        cout<< "Sayilar 2 Top : "<< sayilar2.top() << endl ; 
        sayilar2.pop() ; 
    }
     
    return 0  ; 

}