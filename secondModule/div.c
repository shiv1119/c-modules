#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n%3 == 0 && n % 7 == 0){
        printf("The number is divisible by 3 and 7");
    }else if(n%3 ==0){
        printf("Number is doivisible by 3");
    } else if (n%7 == 0){
        printf("Number is divisible by 7");
    } else {
        printf("Not divisible by 3 and 7");
    }
    return 0;
}