//program to check if the array is sorted or not

#include <iostream>
using namespace std;

int main() {
    const int maxsize = 100;
    int numbers[maxsize];
    int size;
    bool issorted = true;

    cout << "enter array size: ";
    cin >> size;

    if (size <= 0 || size > maxsize) {
        cout << "invalid size";
        return 0;
    }

    cout << "enter array elements:\n";

    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < size - 1; i++) {
        if (numbers[i] > numbers[i + 1]) {
            issorted = false;
            break;
        }
    }

    if (issorted == true) {
        cout << " array is sorted";
    }
    else {
        cout << " array is not sorted";
    }

    return 0;
}