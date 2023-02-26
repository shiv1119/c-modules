#include<stdio.h>
#include<conio.h>

int main(){
    int n, x, fact = 1;
    float sum = 0;
    printf("Enter the terms of taylor series and value of x: ");
    scanf("%d %d", &n, &x);
    for(int i = 1; i<n; i++){
        fact = fact * i;
        sum = sum + (pow(x, i) / fact);
    }
    sum = sum + 1;
    printf("Sum of the %d terms of taylor series is %f", n, sum);
    return 0;
}