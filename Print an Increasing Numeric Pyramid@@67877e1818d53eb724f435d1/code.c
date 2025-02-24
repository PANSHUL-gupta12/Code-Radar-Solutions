#include <stdio.h>

int main() {
    int n, i, j;
    
    scanf("%d", &n);
    
    // Loop for rows
    for (i = 1; i <= n; i++) {
        // Loop for printing numbers
        for (j = 0; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
