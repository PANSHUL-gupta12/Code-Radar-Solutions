#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
E