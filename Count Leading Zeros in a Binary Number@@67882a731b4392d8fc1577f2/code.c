#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u",&n);

    int count=0;
    if(n==0){
        printf("32\n");
    }

    for (int i==31;i>=0;i--){
        if((n >> 1) & 1){
            break;
        }
        count++;
    }
    printf("%d",count);
}