#include <stdio.h>

int main() {
    int a;
    char ch;
    scanf("%d",&a);
    for (int i = 1;i <= a;i--){
        ch='A';
        for (int j = 1;j <= i;j--){
            printf("%C ",ch);
            ch++;
        }
        printf("\n");
    }
}