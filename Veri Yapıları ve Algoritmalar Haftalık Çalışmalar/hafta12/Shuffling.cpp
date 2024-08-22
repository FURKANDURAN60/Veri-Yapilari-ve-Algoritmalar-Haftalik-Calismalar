#include <iostream>
#include <algorithm>
#include <array>
#include <random>
#include <chrono>

using namespace std ;

//Rearrangers the elements in the range [first, last) randomly ,
// using g as uniform random number generator
/*
template< class RandomAccessIterator , class URNG>

void shuffle(RandomAccessIterator first , RandomAccessIterator last , URNG&& g){
    
    for(auto i = (last - first) - 1 ; i > 0 ; --i)
    {
        uniform_int_distribution<decltype(i) > d( 0, i) ; 
        swap(first[i] , first[d(g)]) ;
    }
}
*/
int main()
{
    array<int ,5> foo{ 1, 2, 3, 4, 5} ; 

    //obtain a time-based seed : 
    //zamana dayalı tohum elde etme :)
    //Rastgele sayı üretek için bir başlangıç değeri :  
    unsigned seed = chrono::system_clock::now().time_since_epoch().count() ;

    shuffle(foo.begin(), foo.end() , default_random_engine(seed));

    cout << "Shuffled Elements : " ; 
    for (int& x : foo) cout << " " << x  ;

    return 0 ;


}