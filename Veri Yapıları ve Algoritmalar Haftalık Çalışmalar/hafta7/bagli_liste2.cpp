#include <iostream>

using namespace std ;

class Node 
{
    public : 
        int data ;
        Node *next ; 
        Node(int data , Node *next=NULL)
        {
            this->data = data ;
            this->next = next ;
        }
};
//Bağlı Listedeki Elemanları Yazdıran Fonksiyon 
void print(Node *temp)
{
    while(temp != NULL)
    {
        cout << temp->data << endl ;
        temp = temp->next ; 
    }
}

void oprint(Node *temp)
{
    if(temp != NULL)
    {
        cout << temp->data << "\t" ; 
        oprint(temp->next) ; 
    }
}

int boyut(Node *temp)
{
    int say = 0 ; 
    while(temp != NULL)
    {
        say++ ;
        temp = temp->next ; 
    }
    return say ;
}

int main()
{
    Node *head , *temp ;
    
    head = new Node(5) ;
    temp = head ; 
    temp->next = new Node(3) ; 
    temp = temp->next ;
    temp->next = new Node(7) ; 
    temp = temp->next ;
    temp->next = new Node(11) ; 
    // head i temp e eşitlediğimiz için temp ile yapacağımız her işlem head için de geçerli oluyor.
    oprint(head)  ;
    cout << "ozyinelemeli kisim\t" ;  
    oprint(head) ;
    cout << "ozyinelemeli kisim\n" ;
    cout << "Eleman Sayisi : " ;
    cout << boyut(head) ; 

    return 0 ;
}