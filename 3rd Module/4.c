// Program to find the fibonacci series

#include<stdio.h>

int main(){
    int n, a = 0, b = 1, fib = 0, q = 1;

    printf("Enter a number to find the fibonacci series: ");
    scanf("%d", &n);
    printf("The fibonacci series is %d %d", a, b); //initilization of series (0,1) because series is sum of past 2 numbers
    while(q <= n-2){
        fib = a + b;
        printf(" %d", fib);
        a = b;
        b = fib;
        q += 1;
    }

    return 0;
    
}