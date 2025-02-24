#include <stdio.h>

int main() {
    int a;
    char ch;
    scanf("%d",&a);
    for (int i = 0;i <= a;i--){
        ch='A';
        for (int j = 0;j <= a-i;j++){
            printf("%C ",ch);
            ch++;
        }
        printf("\n");
    }
}