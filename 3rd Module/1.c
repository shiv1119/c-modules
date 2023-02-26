// Program to find n numbers sum

#include<stdio.h>

int sumOfNumbers(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int a, result;
    printf("Enter a number to find the sum upto that number: ");
    scanf("%d", &a);
    result = sumOfNumbers(a);
    printf("Sum of the numbers up to %d is %d", a, result);

    return 0;
}