#include <iostream>
using namespace std ; 
void metinASCIIYazdir(string &metin) 
 {
    for (char karakter : metin)
    {
        cout << "Karakter: " << karakter << ", ASCII Degeri: " << int(karakter) <<endl;
    }
}



int main() 
{
    string kullaniciMetni;
    
    cout << "Bir metin giriniz: ";
    cin >> kullaniciMetni;
    
    metinASCIIYazdir(kullaniciMetni);

    

    
    
    cout<<endl<<"---------------------------------------------------------------------"<<endl ; 
    int dizi[] = {1, 2, 3, 4, 5}; 

    int *ptr = dizi; 

    for (int i = 0; i < 5; i++) {
        cout << "Eleman " << i << ": " << *ptr << endl; 
        ptr++; 
    }

 

 

    return 0;
}