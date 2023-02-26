// program to find the sum of n umnbers squares

#include<stdio.h>

int sumOfSquares(int n){
    int q, sum = 0;
    // while loop
    q = 1;
    while(q<=n){
        sum += q * q;
        q += 1; 
    }
    return sum;
}

int main(){
    int n, result;
    printf("Enter a number to find sum of all squares upto that number: ");
    scanf("%d", &n);
    result = sumOfSquares(n);
    printf("Sum of all squares upto %d is %d", n, result);
    
    return 0;
}