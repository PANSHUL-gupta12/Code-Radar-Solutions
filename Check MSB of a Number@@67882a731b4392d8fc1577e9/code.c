#include <stdio.h>

#define INT_bits 32

int main() {
    int a;
    int msb=1<<(INT_bits-1);
    scanf("%d",&a);
    if(a & msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    
}