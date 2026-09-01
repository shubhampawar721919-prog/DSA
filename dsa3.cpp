
//fundamentals of cpp printing reversed array
#include <iostream>
using namespace std;

int main() {
    const int maxsize = 100;
    int numbers[maxsize];
    int size;

    cout << " size of array: ";
    cin >> size;

    if (size > maxsize || size <= 0) {
        cout << "invalid size";
        return 0;
    }

    cout << "Enter array elements:\n";

    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    cout << "Array in reverse order:\n";

    for (int i = size - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    return 0;
}