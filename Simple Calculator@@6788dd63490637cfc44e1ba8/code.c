#include <stdio.h>

int main() {
    float n1,n2,res;
    char op;
    scanf("%f %f %c",&n1,&n2,&op);
    if(op=='+'){
        res=n1+n2;
        printf("%d",res);
    }
    else if(op=='-'){
        res=n1-n2;
        printf("%d",res);
    }
    else if(op=='*'){
        res=n1*n2;
        printf("%d",res);
    }
    else if(op=='/'){
        res=n1/n2;
        printf("%d",res);
    }
}