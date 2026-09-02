// rogram to remove duplicates from a sorted array

#include <iostream>
using namespace std;

int main() {
    const int maxsize = 100;
    int numbers[maxsize];
    int size;

    cout << "enter aray size: ";
    cin >> size;

    if (size <= 0 || size > maxsize) {
        cout << "Invalid array size";
        return 0;
    }

    cout << "enter sorted array elements";

    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    int position = 1;

    for (int i = 1; i < size; i++) {
        if (numbers[i] != numbers[position - 1]) {
            numbers[position] = numbers[i];
            position++;
        }
    }

    cout << "aray without dupes: ";

    for (int i = 0; i < position; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    cout << "new array size: " << position << endl;

    return 0;
}