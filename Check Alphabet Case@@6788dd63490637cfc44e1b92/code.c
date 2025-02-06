#include <stdio.h>

int main() {
    char a;
    scanf("%d",&a);
    if(tolower(a)){
        printf("Lowercase");
    }
    else if(toupper(a)){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
}