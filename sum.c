#include <stdio.h>
int main() {
    int x, a = 0, b = 0;

    printf("Enter the number: ");
    scanf("%d", &x);

    printf("The required result is:\n");

    while (x >= 10) { // Repeat until x becomes a single-digit number
        b = 0;        // Reset the sum for each iteration
        while (x != 0) {
            a = x % 10; // Extract the last digit
            b += a;     // Add it to the sum
            x /= 10;    // Remove the last digit
            printf("%d", a);  // Display each digit
            if (x != 0) printf(" + "); // Print "+" between digits
        }
        printf(" = %d\n", b); // Print the intermediate result
        x = b;                  // Update x with the new sum
    }

    printf("Final result: %d\n", x);
    return 0;
}
