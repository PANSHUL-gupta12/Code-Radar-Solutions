#include <stdio.h>

int main() {
    int n, i, j;
    
    scanf("%d", &n);
    
    // Loop for rows
    for (i = 1; i <= n-i-1; i++) {
        // Loop for printing numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
