#include <iostream>
#include <stack>

using namespace std  ;

int main()
{
    stack<string> languages ; 

    languages.push("C++") ; 
    languages.push("Java") ; 
    languages.push("Python") ;
    languages.push("C#") ;
    languages.push("C") ;
    languages.push("JavaScript") ; 

    string  top = languages.top() ;  

    cout << top << endl  ; 

    cout<< languages.top() << endl ;

    return 0  ; 

}