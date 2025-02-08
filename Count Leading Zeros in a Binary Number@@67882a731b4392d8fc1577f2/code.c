#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u",&n);

    int count;
    if(n == 0){
        printf("32");
        return 0;
    }

    for (int i=30;i>=0;i--){
        if((n >> 1) & 1){
            break;
        }
        count++;
    }
    printf("%d",count);
}