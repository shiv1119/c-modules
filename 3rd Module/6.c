// Program to check weather entered number is an armstrong number

#include<stdio.h>
#include<math.h>

int main(){
    int q, n, a, rem;
    float sum = 0;
    printf("Enter a number to check armstrong condition: ");
    scanf("%d", &n);
    q = n;
    while(q != 0){
        q = q / 10;
        a += 1;
    }
    q = n;
    while(q != 0){
        rem = q % 10;
        sum += pow(rem, a);
        q = q / 10;
    }
    if((int)sum == n){
        printf("%d is a armstrong number: ", n);
    } else {
        printf("%d is not a armstrong number: ", n);
    }

    return 0;
}