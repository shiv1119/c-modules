#include<stdio.h>
#include<math.h>


int main(){
    int n, x, a;
    int sum = 0;
    printf("Enter degree pf polynomial and value of x: ");
    scanf("%d %d", &n, &x);
    for(int i = 0; i<=n; i++){
        scanf("%d", &a);
        sum = sum + pow(x, i) * a;
    }
    printf("%d", sum);
    return 0;
}