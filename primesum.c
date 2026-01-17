#include <stdio.h>

int main() {
    int start, end;

   
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Ensure start is less than or equal to end
    if (start > end) {
        printf("Invalid range! Starting number should be less than or equal to the ending number.\n");
        return 0;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through the range
    for (int num = start; num <= end; num++) {
        if (num < 2) continue; // Skip numbers less than 2 (not prime)

        int isPrime = 1; // Assume the number is prime

        // Check divisors from 2 to sqrt(num)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        // If prime, print the number
        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
