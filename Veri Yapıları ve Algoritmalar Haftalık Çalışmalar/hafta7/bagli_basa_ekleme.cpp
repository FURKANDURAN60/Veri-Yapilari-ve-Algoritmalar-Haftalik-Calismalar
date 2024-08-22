#include <iostream>

using namespace std ;

class Node 
{
    public :
        int data ;
        Node *next ;
        Node(int data , Node *next = NULL)
        {
            this->data = data ;
            this->next = next ; 
        }
};

// Bağlı Listedeki Elemanları Yazdıran Fonk.
int print(Node *temp)
{
    if(temp != NULL)
    {
        cout << "\t" << temp->data << "\t" ;
        print(temp->next) ; 
    }
    
}
int boyut(Node *temp)
{
    cout << endl ;
    int say = 0 ; 

    while (temp->next != NULL)
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
    temp= temp->next ; 
    temp->next = new Node(11) ; 

    cout << "Ekleme yapilmadan once bagli liste elemanlari : " << endl ; 
    print(head) ; 
    cout << "Ekleme yapilmadan once bagli liste boyutu : " << boyut(head) << endl ; 

    // Bağlı Listenin Başına Eleman Ekleme İşlemi
    Node *yeni ; 

    yeni = new Node(20) ;

    if(head == NULL)
    { 
        yeni = head ;
    }
    else
    { 
    yeni->next = head ; 
    head = yeni ; 
    }

    cout << "Ekleme yapildiktan sonra bagli liste elemanlari : " << endl ; 
    print(head) ; 
    cout << "Ekleme yapildiktan sonra bagli liste boyutu : " << boyut(head) << endl ; 

    //Bağlı Listenin Sonuna Eleman Ekleme İşlemi
    cout << "------------------------------------------------------------\n" ; 
    cout << "SONA Ekleme yapilmadan once bagli liste elemanlari : " << endl; 
    print(head) ; 
    cout << "SONA Ekleme yapilmadan once bagli liste boyutu : " << boyut(head) << endl ; 

    Node *son ; 

    son = new Node(30) ;
    
    if(head == NULL)
    {
        head = son ; 
    }
    else
    {
        temp = head ; 
        while (temp->next != NULL)
        {
            temp  = temp->next ;
        }
        temp->next = son ; 
    }

    cout << "SONA Ekleme yapildiktan sonra bagli liste elemanlari : " ; 
    print(head) ; 
    cout << "SONA Ekleme yapildiktan sonra bagli liste boyutu : " << boyut(head) << endl ;


    Node *ara ; 

    ara = new Node(54) ; 

    int sayac = 0 ; 
    int konum = 5 ;

    temp = head ; 
    while (temp->next != NULL)
    {
        if(konum - 1 == sayac) break;
        temp = temp->next ; 
        sayac++ ;
    }
    ara->next = temp->next ; 
    temp->next = ara ; 

    print(temp) ; 
    boyut(temp) ;

    



    return 0 ;
}