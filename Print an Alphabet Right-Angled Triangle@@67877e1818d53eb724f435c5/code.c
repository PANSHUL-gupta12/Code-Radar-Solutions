#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    for (int i = 1;i <= a;i++){
        for (int j = 'A';j <= i;j++){
            printf("%C ",j);
        }
        printf("\n");
    }
}