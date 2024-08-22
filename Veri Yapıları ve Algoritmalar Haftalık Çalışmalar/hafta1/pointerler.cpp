#include <iostream>
using namespace std;
int main() 
{
int var = 5;
int* pointVar;
// var adresini sakla
pointVar = &var;
// var degerini yazdir
cout << "var = " << var << endl;
// *pointVar isaretcisini yazdir
cout << "*pointVar = " << *pointVar << endl << endl;
cout << "var degiskenin degerini 7 olarak degistir:" << endl;
// var degerini 7 olarak degistir
var = 7;
// var degerini yazdir
cout << "var = " << var << endl;
// *pointVar isaretcisini yazdir
cout << "*pointVar = " << *pointVar << endl << endl;
cout << "*pointVar isaretcisinin degerini 16 olarak degistir:" << endl;
// dolaylı olarak var degisken degeri 16 olarak degisecektir
*pointVar = 16;
// var degerini yazdir
cout << "var = " << var << endl;
// *pointVar degerini yazdir
cout << "*pointVar = " << *pointVar << endl;
return 0;
}