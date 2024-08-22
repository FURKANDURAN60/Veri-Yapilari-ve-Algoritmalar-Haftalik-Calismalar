#include <iostream>
using namespace std ;

void buyuksayibul(int dizi[], int eleman)
{
    int i , maxindex ; 
    maxindex =dizi[0]; 

    for(i = 0  ; i < eleman ; i++)
    {
        if(dizi[i]>maxindex)
        {
            maxindex=dizi[i];
        }
    }
    cout<<"Dizinin en buyuk elemani : " ; 
    cout << maxindex<< endl ; 

}

void kucuksayibul(int dizi[], int eleman)
{
    int i , minindex ; 
    minindex =dizi[0]; 

    for(i = 0  ; i < eleman ; i++)
    {
        if(dizi[i]<minindex)
        {
            minindex=dizi[i];
        }
    }
    cout<<"Dizinin en kucuk elemani : " ; 
    cout << minindex; 

}


int main()
{
    int dizi[100] , eleman , i  ;

    cout<<"Dizinin Eleman Sayisini Giriniz : "<< endl ; 
    cin>>  eleman ;
    cout<< " Dizinin elemanlarini giriniz"<<endl  ;

    for(i=0 ; i<eleman ; i++)
    {
        cin>> dizi[i]  ;
    }

    buyuksayibul(dizi , eleman ) ; 
    kucuksayibul(dizi , eleman) ; 
    

    return 0  ;
}

