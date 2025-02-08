#include <stdio.h>

int main() {
    int n1,n2,res;
    char op;
    scanf("%1f %1f %c",&n1,&n2,&op);
    if(op=='+'){
        res=n1+n2;
        printf("%.2f",res);
    }
    else if(op=='-'){
        res=n1-n2;
        printf("%.2f",res);
    }
    else if(op=='*'){
        res=n1*n2;
        printf("%.2f",res);
    }
    else if(op=='/'){
        res=n1/n2;
        printf("%.2f",res);
    }
}