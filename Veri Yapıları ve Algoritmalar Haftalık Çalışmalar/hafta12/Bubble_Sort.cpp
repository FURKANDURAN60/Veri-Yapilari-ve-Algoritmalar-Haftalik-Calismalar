#include <iostream>
#include <algorithm>

using namespace std;
int sayac = 0;
int sayac2 = 0 ; 
void BubbleSort(int *sayilar, int uzunluk) {
    
    for (int i = 0; i < uzunluk; i++) {
        for (int j = 1; j < uzunluk - i; j++) {  // Corrected loop condition
            if (sayilar[j - 1] > sayilar[j]) {
                int tmp = sayilar[j - 1];
                sayilar[j - 1] = sayilar[j];
                sayilar[j] = tmp;
                sayac++;
            }
        }
    }
    cout << endl << "1.SAYAC: " << sayac << endl;
}

void BubbleSortOp(int arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
            sayac2++;
        }
        
    }
}

void print(int arr[], int uzunluk) {
    for (int i = 0; i < uzunluk; i++) {
        cout << arr[i] << " ";
    }
    cout << "1.SAYAC: " << sayac << endl ;
    cout << "2.SAYAC: " << sayac2 << endl;
}

int main() {
    int sayilar[5] = {15, 56, 7, 13, 23};
    int sayilar2[5] = {15, 56, 7, 43, 23};

    BubbleSort(sayilar, 5);
    BubbleSortOp(sayilar2, 5);
    print(sayilar, 5);
    cout <<"------------"<<endl  ;
    print(sayilar2, 5) ;

     
    return 0 ; 
}