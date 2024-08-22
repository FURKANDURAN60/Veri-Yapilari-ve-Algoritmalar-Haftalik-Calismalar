#include <iostream>
#define SIZE 5 

using namespace std ; 

class Queue 
{
    private : 
        int items[SIZE] , front , rear ; 

    public : 
        Queue() 
        {
            front = -1  ;
            rear = -1  ; 
        }

        bool isFull()
        {
            if(front == 0 && rear == SIZE - 1)
            {
                return true ; 
            }
            return false  ;
        }

        bool isEmpty()
        {
            if(front == -1) 
                return true  ;
            else
                return false ; 
        }

        void enQueue(int element)
        {
            if(isFull())
            {
                cout << "Queue DOLU"  ;
            }
            else
            {
                if(front == -1) front = 0  ;
                rear++  ;

                items[rear] = element  ;

                cout << endl 
                        << "Eklendi  " << element << endl  ;
            }
        }

        int deQueue () 
        {
            int element  ;
            if(isEmpty())
            {
                cout << "Queue BOS" << endl ;
                return (-1) ; 
            }
            else
            {
                element = items[front] ; 
                if (front >= rear )
                {
                    front = -1 ; 
                    rear = -1 ;
                }
                // Q' nun sadece bir elemanı var , bu yüzden kuyruğu sildikten sonra sıfırlıyoruz
                else
                {
                    front++ ; 
                }
                cout << endl 
                    << "Silindi - >" << element << endl  ;
                return (element) ; 

            }
        }

        void display()
        {
            // Kuyruk elemanlarini görüntüleme
            int i ; 
            if(isEmpty())
            {
                cout << endl 
                    << "BOS Queue " << endl ;
            }
            else
            {
                cout << endl << "Front indeks -> " << front ; 
                cout << endl << "Elemanlar -> " ;
                for(i = front  ; i <= rear ;  i++)
                    cout << items[i] << "  ";
                cout << endl << "Rear indeks -> " << rear << endl  ; 
            }
        }

};


int main ()
{

    Queue q  ;

    // deQueue bos kuyrukta mumkun degil 
    q.deQueue ();

    //enQueue 5 eleman 

    q.enQueue(1) ; 
    q.enQueue(2) ;
    q.enQueue(3) ; 
    q.enQueue(4) ;
    q.enQueue(5) ; 

    q.enQueue(6) ;
    
    // 6. elemanı yer olmadığı için eklemiyor...

    q.display() ;

    // deQueue ile ilk girdiğimiz 1 değerini sileriz...

    q.deQueue() ; 

    // Şimdi ise 4 elemanımız kaldı ...

    q.display() ; 

    return 0 ;
}