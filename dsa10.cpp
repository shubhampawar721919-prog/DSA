// program to find the single missing number in array

#include <iostream>
using namespace std;

int main() {
    const int maxsize = 100;
    int numbers[maxsize];
    int n;

    cout << "enter the value of n";
    cin >> n;

    if (n <= 0 || n - 1 > maxsize) {
        cout << "invalid value of n";
        return 0;
    }

    int arraysize = n - 1;

    cout << "enter " << arraysize << " distinct numbers from 1 to " << n ;

    for (int i = 0; i < arraysize; i++) {
        cin >> numbers[i];
    }

    // calculate the total sum of target range using sum of natural numbers
    int expect = n * (n + 1) / 2;

    // calculate the sum of numbers actually present
    int actualsum = 0;

    for (int i = 0; i < arraysize; i++) {
        actualsum = actualsum + numbers[i];
    }

    // the difference is the missing number
    int missingnumber = expect - actualsum;

    cout << "missing number " << missingnumber << endl;

    return 0;
}