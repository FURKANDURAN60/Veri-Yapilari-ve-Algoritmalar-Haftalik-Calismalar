#include <iostream>

using namespace std ;

class Node 
{
    public : 
        int data ;
        Node *next ; 
        Node(int data , Node *next)
        {
            this->data = data ;
            this->next = next ;
        }
}

int main()
{
    // Farklı şekilde de yazılabilirdi
                                   // Node *head;                           / Node *head , *temp ; 
    Node *node1 = new Node(5) ;    // head=new Node(5);                     / head = new Node(5) ;
    Node *node2 = new Node(3) ;    // head->next=new Node(3);               / temp = head ; 
    Node *node3 = new Node(7) ;    // head->next->next=new Node(7);         / temp->next = new Node(3) ; 
    Node *node4 = new Node(11) ;   // head->next->next->next=new Node(11);  / temp = temp->next ; ..... 
                                    

    
    note1->next = node2 ; 
    node2->next = node3 ; 
    node3->next = node4 ;
   
    return 0 ;
}