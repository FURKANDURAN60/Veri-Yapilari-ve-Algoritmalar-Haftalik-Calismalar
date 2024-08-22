#include <iostream>

using namespace std ;

class Node 
{
    public : 
        int data ;
        Node *next ;
        Node(int data , Node *next = NULL )
        {
            this->data = data ; 
            this->next = next ;
        }
};

void print(Node *temp)
{
    if(temp != NULL)
    {
        cout << temp->data << endl ;
        print(temp->next);
    }
}

int boyut(Node *temp)
{
    int say = 0 ; 
    while (temp != NULL)
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
    temp = head ; 
    cout << "Bagli Liste :" << endl;

    print(head) ;

    // Başa ekleme işlemi
    Node *yeni ;

    yeni = new Node(20) ; 

    if(head == NULL)
    {
        head = yeni ; 
    } 
    else
    {
        yeni->next = head ; 
        head = yeni ;
    }
    //--------------------

    //Sona ekleme işlemi
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
            temp = temp->next ; 
        }
        temp->next = son ; 
    }
    //--------------------

    //İç kısıma ekleme işlemi 

    Node *ara ;

    ara = new Node(54) ; 

    int sayac = 0 ;
    int konum = 4 ;
    temp = head ; 
    while (temp->next != NULL)
    {
        if((konum-1)== sayac) break ;

        temp = temp->next ;
        sayac++ ;
    }
    ara->next = temp->next ; 
    temp->next = ara ; 

    //--------------------
    cout << "Dugum Sayisi : "<< boyut(head) << endl ;
    cout << "Bagli Liste :" << endl; 
    temp = head ; 
    print(temp) ;
    

    return 0 ; 
}