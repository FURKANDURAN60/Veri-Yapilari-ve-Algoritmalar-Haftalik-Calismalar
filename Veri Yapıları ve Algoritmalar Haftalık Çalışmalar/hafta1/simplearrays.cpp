//Kullanıcıdan Girdiler Alın ve Bunları Bir Dizide Saklayın
#include <iostream>
using namespace std;
int main() 
{
int sayilar[5];
cout << "5 Tane Tamsayi Girmelisiniz!" << endl;
// girilen degerleri bir int dizisinde sakla
for (int i = 0; i < 5; ++i) {
cout << i + 1 << ". Sayi giriniz..:";
cin >> sayilar[i];
}
cout << endl << "Girilen sayilar: ";
// dizi elemanlarini ekranda yazdir
for (int n = 0; n < 5; ++n) {
cout << sayilar[n] << " ";
}


//_______Döngü için Kullanılan Dizi Elemanlarının Toplamını ve Ortalamasını Görüntüleme_____
// boyut belirtmeden bir diziyi baslat
double sayilar[] = {7, 5, 6, 12, 35, 27};
double toplam = 0;
double sayac = 0;
double ortalama;
cout << "Sayilar...: ";
// dizi elemanlarını yazdır
// aralık tabanlı for döngüsü kullanımı
for (const double &n : sayilar) {
cout << n << " ";
// calculate the sum
toplam += n;
// dizi elemanlarının sayısını say
++sayac;
}
// toplamı yazdır
cout << "\nSayilarin Toplami = " << toplam << endl;
// ortalamayı bul
ortalama = toplam / sayac;
cout << "Sayilarin Ortalamasi = " << ortalama << endl;



} 