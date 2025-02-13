#include <stdio.h>

int main() {
    int n, i, j;
    char ch;

    // Input the number of rows
    
    scanf("%d", &n);

    // Loop to print the pattern
    for(i = 1; i <= n; i++) {  // Controls the number of rows
        ch = 'A';  // Reset character for each row
        for(j = 1; j <= i; j++) {  // Prints letters in each row
            printf("%c ", ch);
            ch++;  // Move to next letter
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
