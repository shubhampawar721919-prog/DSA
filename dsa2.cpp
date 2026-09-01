
//program to find largest and second largest number
#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int numbers[maxSize];
    int size;

    cout << "enter size of aray ";
    cin >> size;

    if (size < 2 || size > maxSize) {
        cout << "enter a valid suze";
        return 0;
    }



    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    int largest;
    int secondlargest;

   
    if (numbers[0] > numbers[1]) {
        largest = numbers[0];
        secondlargest = numbers[1];
    }
    else {
        largest = numbers[1];
        secondlargest = numbers[0];
    }

  
    for (int i = 2; i < size; i++) {

        if (numbers[i] > largest) {
            secondlargest = largest;
            largest = numbers[i];
        }
        else if (numbers[i] > secondlargest) {
            secondlargest = numbers[i];
        }
    }

    cout << "Largest: " << largest << endl;
    cout << "Second largest: " << secondlargest << endl;

    return 0;
}
//in brief we simply compared the 2 initial indexes and figured the lrgest and second largest in them
//then we sorted them according to the size