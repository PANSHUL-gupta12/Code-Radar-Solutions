#include <stdio.h>

int main() {
    int a;
    char ch;
    scanf("%c",&a);
    for (int i = 1;i <= a;i++){
        ch='A'
        for (int j = 'A';j <= i;j++){
            printf("%C ",ch);
            ch++;
        }
        printf("\n");
    }
}