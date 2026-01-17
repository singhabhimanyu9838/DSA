#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        // Skip numbers that are multiples of 5 or 7
        if (i % 5 == 0 || i % 7 == 0) {
            continue;
        }else{
         printf("%d ", i);
        }
    }
    return 0;
}

