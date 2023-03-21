#include<stdio.h>

int factorial(int n){
    int fact = 1;
    for(int i = 1; i<= n; i++){
        fact *= i;
    }
    return fact;
}

int permutation(int n, int r){
    int permu = factorial(n)/factorial(n-r);
    return permu;
}

int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    int ans = permutation(n, r);
    printf("%d", ans);
    return 0;
}