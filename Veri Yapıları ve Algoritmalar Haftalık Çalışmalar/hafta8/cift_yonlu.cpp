#include <iostream>

using namespace std ;

template<typename T>

class Node
{
    private : 
    T data ; // veri
    Node *next , *prev ; // sonraki , önceki 

    public : 

        Node(const T data , Node<T> *next = NULL , Node<T> *prev = NULL)
        {
            this->data = data ;
            this->next = next ;
            this->prev = prev ;
        }

        template<class Nesne> friend class Dlist ;
};

template<class Nesne>
class Dlist
{
    private :
        Node<Nesne> *temp = head ;
        int cnt = 0 ; 
        while (temp != NULL)
        {
            if(cnt == inx - 1 )
        }
        
};

