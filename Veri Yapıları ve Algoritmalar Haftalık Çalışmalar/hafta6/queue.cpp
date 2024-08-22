#include <iostream>
#include <queue>
using namespace std ; 

template<typename T>
void print(queue<T> & q)   // eğer burada  & kullanırsak  bu kuyruğu gerçekten boşaltır.  
                           // ama kullanmazsak bu fonksiyonu tekrar çağırdığımızda kuyruk boşalmadığı için aynı sonucu verir.
{
    while (!q.empty())
    {
        cout << q.front() << " "  ;
        q.pop() ; 
    }
    
}




int main()
{
    queue<int> q ; 

    cout << q.empty() << endl ; 
    q.push(5) ;
    q.push(1) ; 
    q.push(3) ;
    cout << q.empty() << endl ; 
    cout << q.front() << endl ; 
    cout << q.back() << endl ;   
    q.pop() ; 
    cout << q.front() << endl ;
    cout << "size : " << q.size() << endl ;

    //kopyalama işlemi
    queue <int> q1 (q) ;
    cout << "---------------------\n" ;
    print(q) ; 


    q.push(12) ; 
    q.push(07) ;
    q.pop() ; 
    print(q) ; 
    

    return 0 ; 
}