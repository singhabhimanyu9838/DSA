#include <iostream>
using namespace std;

int main() {
    int x, a = 0, b = 0;
    cout << "Enter the number: ";
    cin >> x;

    cout << "The required result is: ";

    while (x >= 10) { // Repeat until x becomes a single-digit number
        b = 0;        // Reset the sum for each iteration
        while (x != 0) {
            a = x % 10; // Extract the last digit
            b += a;     // Add it to the sum
            x /= 10;    // Remove the last digit
            cout << a;  // Display each digit
            if (x != 0) cout << " + "; // Print "+" between digits
        }
        cout << " = " << b << endl; // Print the intermediate result
        x = b;                      // Update x with the new sum
    }

    cout << "Final result: " << x << endl;
    return 0;
}
