#include <stdio.h>

int main() {
    double n1,n2,res;
    char op;
    scanf("%lf %lf %c",&n1,&n2,&op);
    if(op=='+'){
        res=n1+n2;
        printf("%lf",res);
    }
    else if(op=='-'){
        res=n1-n2;
        printf("%lf",res);
    }
    else if(op=='*'){
        res=n1*n2;
        printf("%lf",res);
    }
    else if(op=='/'){
        res=n1/n2;
        printf("%lf",res);
    }
}