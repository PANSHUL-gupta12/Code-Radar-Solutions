#include <stdio.h>

int main() {
    int n, i, j;

    // Input the number of rows
    
    scanf("%d", &n);

    // Loop to print the pattern
    for(i = n; i >= 1; i--) {  // Controls the number of rows
        for(j = 1; j <= i; j++) {  // Prints numbers in each row
            printf("%d", j);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
