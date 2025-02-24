#include <stdio.h>

int main() {
    int n, i, j, s;

    scanf("%d", &n);


    for (i = 1; i <= n; i++) {
        // Printing spaces for center alignment
        for (s = 1; s <= n - i; s++) {
            printf(" ");
        }

        // Printing numbers in increasing order
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
