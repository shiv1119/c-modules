#include<stdio.h>

int main(){
    int a;
    float f;
    double d;
    char c;
    scanf("%d %f %lf %c", &a, &f, &d, &c);
    printf("%d %d %d %d", sizeof(a), sizeof(f), sizeof(d), sizeof(c));
    return 0;
}