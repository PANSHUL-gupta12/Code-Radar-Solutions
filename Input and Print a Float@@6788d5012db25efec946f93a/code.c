#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    scanf("%.2f",&a);
    printf("you entered:",a);
    // printf("%s", welcome());
    return 0;
}