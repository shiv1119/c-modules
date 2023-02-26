//  square root without using squareroot function

#include<stdio.h>

int main(){
    int n;
    float sqrt, temp;
    printf("Enter a number to find squareroot: ");
    scanf("%d", &n);
    sqrt = n / 2;
    while(temp != sqrt){
        temp = sqrt;
        sqrt = (n/temp + temp)/2;
    }
    printf("The square root of %d is %f", n, sqrt);
    return 0;

}