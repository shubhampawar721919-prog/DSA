// program to left-rotate an array by one position

#include <iostream>
using namespace std;

int main() {
    const int maxsize = 100;
    int numbers[maxsize];
    int size;

    cout << "enter size of array";
    cin >> size;

    if (size <= 0 || size > maxsize) {
        cout << "invalid array size";
        return 0;
    }

    cout << "enter array elements";

    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    // saving first element before over writing it
    int temp = numbers[0];

    // shifting each element to left 
    for (int i = 0; i < size - 1; i++) {
        numbers[i] = numbers[i + 1];
    }

    // putting stored element on our desired position
    numbers[size - 1] = temp;

    cout << "array after left rotation";

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}