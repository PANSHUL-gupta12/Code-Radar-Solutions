#include <stdio.h>


int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    b=b&~(1<<a);
    printf("%d",b);
}