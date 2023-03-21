#include<stdio.h>


int gcdRecursion(int a, int b){
    if(b == 0){
        return a;
    } else {
        gcdRecursion(b, a%b);
    }
}




int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcdRecursion(a, b);
    printf("%d", ans);

    return 0;
}