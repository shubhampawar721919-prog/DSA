// Program to reverse an array in place : two pointer tihng

#include <iostream>
using namespace std;

int main() {
    const int maxsize = 100;
    int numbers[maxsize];
    int size;

    cout << "size of array: ";
    cin >> size;

    if (size <= 0 || size > maxsize) {
        cout << "Invalid array size.\n";
        return 0;
    }

    cout << "Enter " << size << " elements:\n";

    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    int left = 0;
    int right = size - 1;

    while (left < right) {
        int temporary = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temporary;

        left++;
        right--;
    }

    cout << "Reversed array: ";

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}