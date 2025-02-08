#include <stdio.h>

int main() {
    int n1,n2,res;
    char op;
    scanf("%d %d %c",&n1,&n2,&op);
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