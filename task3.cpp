#include <iostream>
using namespace std;

int main() {
    int n; // Number of rows
    cout << "Please enter a number to print rows: ";
    cin >> n;

    // Print the reversed star pattern
    for (int i = n; i >= 1; i--) {  // Outer loop starts from 'n' and decreases
        for (int j = i; j < n; j++) {
            cout << " ";  // Print leading spaces
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";  // Print stars in decreasing order
        }
        cout << endl;
    }
    return 0;
}
