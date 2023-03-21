#include<stdio.h>

int main(){
    int* a, *b;
    int x, y;
    scanf("%d %d", &x, &y);
    a = &x;
    b =&y;
    printf("%d", *a + *b);
    return 0;
}