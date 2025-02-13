#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Upper half including the middle row
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (one row less than the top half)
    for (int i = N - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
