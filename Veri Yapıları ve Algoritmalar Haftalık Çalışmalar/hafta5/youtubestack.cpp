#include <iostream>
#include <stack>

using namespace std ; 

template <typename T>
void print(stack<T> mystack)
{
    while(!mystack.empty())
    {
        cout << mystack.top() << " " ; 
        mystack.pop() ;
    }
    cout << endl ;
} 

int main() 
{
    stack<int> mystack ; 
    cout << mystack.empty() << endl  ;
    mystack.push(10) ; 
    cout << mystack.empty() << endl  ;
    cout << mystack.top() << endl  ;
    mystack.push(5)  ;
    mystack.push(56)  ;
    mystack.push(93)  ;
    mystack.push(89)  ;
    mystack.push(67)  ;
    cout << mystack.top() << endl  ; 
    cout <<"size : " << mystack.size() << endl  ; 

    print(mystack) ;

    stack<int>newstack(mystack); // bu kalıtım olur mu ?
    print(newstack)  ;

}