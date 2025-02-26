#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 10) {
        if (number <= 20) {
            cout << "The number is between 10 and 20." << endl;
        } else {
            cout << "The number is greater than 20." << endl;
        }
    } else {
        cout << "The number is less than 10." << endl;
    }

    return 0;
}

