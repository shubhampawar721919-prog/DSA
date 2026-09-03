// program to right-rotate an array by one position

#include <iostream>
using namespace std;

int main() {
    const int maxsize = 100;
    int numbers[maxsize];
    int size;

    cout << "enter array size: ";
    cin >> size;

    if (size <= 0 || size > maxsize) {
        cout << "invalid array size.\n";
        return 0;
    }

    cout << "enter array elements:\n";

    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    
    int temp = numbers[size - 1];

    
    for (int i = size - 1; i > 0; i--) {
        numbers[i] = numbers[i - 1];
    }

    
    numbers[0] = temp;

    cout << "array after right rotation: ";

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}