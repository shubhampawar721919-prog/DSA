// program to push zero values to the end of the array

#include <iostream>
using namespace std;

int main() {
    const int maxsize = 100;
    int numbers[maxsize];
    int size;

    cout << "Enter array size: ";
    cin >> size;

    if (size <= 0 || size > maxsize) {
        cout << "Invalid array size.\n";
        return 0;
    }

    cout << "Enter array elements:\n";

    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    int position = 0;

    for (int i = 0; i < size; i++) {
        if (numbers[i] != 0) {
            int temporary = numbers[i];
            numbers[i] = numbers[position];
            numbers[position] = temporary;

            position++;
        }
    }

    cout << "Result: ";

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}


//save the current non-zero value in temporary.

//move the value at numbers[position] to numbers[i].

//move the saved non-zero value from temporary
//to numbers[position].

//increase position because that index now contains
//a correctly placed non-zero value