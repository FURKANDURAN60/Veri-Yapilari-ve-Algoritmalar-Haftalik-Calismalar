#include <iostream>

using namespace std ; 

int enbuyuk(int dizi[] , int eleman)
{
    int i , max  ;
    max = dizi[0] ; 

    for(i=0 ; i<eleman ; i++)
    {
        if(max<dizi[i])
        {
            max = dizi[i] ; 
        }
    }
    cout<< " dizinin en büyük elemani : "<< max  ;
}

int main()
{
    int dizi[100] , eleman , i  ; 
    cout << "dizi eleman sayisi :    " ; 
    cin >> eleman ;
    cout << "dizi elemanlarini giriniz " << endl ;

    for(i = 0 ;  i< eleman ; i++)
    {
        cin>> dizi[i] ; 
    }


    enbuyuk(dizi , eleman)  ;




}