#include <stdio.h>

int main() {
    int a;
    int b=2;
    scanf("%d",&a);
    if(a % b==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}