#include<stdio.h>

int main(){
    int c,op;
    scanf("%d", &c);
    op = (c*9/5) + 32;
    if(1){
        printf("%d\n", op);
    }
    if(1){
        printf("%d", (op-32) * 5/9);
    }

    return 0;
}