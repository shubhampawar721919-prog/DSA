#include <iostream>
using namespace std ;
int main(){
    const int maxsize = 100 ;
    int numbers[maxsize] ;
    int size ;

    cout << "enter array size " ;
    cin >> size ;
    if (size > maxsize || size <= 0 ){
        cout << "enter valid size "; 
        return 0 ;
    }
     cout << "enter " << size << "elements \n" ;

     for (int i = 0 ; i <size ;i++){
        cin >> numbers[i];
     }
     int largest = numbers[0];
     int smallest = numbers[0];

     for (int i = 1; i < size; i++) {

    if (numbers[i] > largest) {
        largest = numbers[i];
    }

    if (numbers[i] < smallest) {
        smallest = numbers[i];
    }
}
 cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;

    return 0;
}