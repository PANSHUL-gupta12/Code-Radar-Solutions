#include <stdio.h>

int main() {
    char gd;
    scanf("%C",&gd);
    if(gd == 'A'){
        printf("Excellent");
    }
    else if(gd == 'B'){
        printf("Good");
    }
    else if(gd == 'C'){
        printf("Average")
    }
    else if(gd == 'D'){
        printf("Below Average");
    }
    else if(gd == 'F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
}