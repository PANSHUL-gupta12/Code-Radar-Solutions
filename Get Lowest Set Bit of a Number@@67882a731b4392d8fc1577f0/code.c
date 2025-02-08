#include <stdio.h>

int main() {
    int a , pos=1;
    scanf("%d",&a);
    while((a & 1)==0 & &a>0){
        a>>=1;
        // pos+;
    }
    printf("%d",pos);
}