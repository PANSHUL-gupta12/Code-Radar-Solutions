#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u",&n);

    int count=0;
    if(n == 0){
        printf("32");
        return 0;
    }

    for (int i=30;i>=0;i--){
        if((n >> i) & 1){
            break;
        }
        count++;
    }
    printf("%d",count);
}