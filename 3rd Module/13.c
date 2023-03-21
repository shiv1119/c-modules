#include<stdio.h>
#include<math.h>

int main(){
    int n;
    float sum = 0, x;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    scanf("%f", &x);
    for(int i = 0; i<n; i++){
        sum = sum + pow(x, i) * a[i];
    }
    printf("%f", sum);
    return 0;
}