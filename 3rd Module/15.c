#include<stdio.h>
#include<math.h>

int main(){
    int n, sq, isPrime = 0;
    printf("Enter  number to check prime condition: ");
    scanf("%d", &n);
    sq = sqrt(n);
    for(int i = 0; i<= sq; i++){
        if(n % i == 0){
            isPrime = 1;
        }
    }

    if(isPrime == 0){
        printf("%d is a prime number: ", n);
    } else {
        printf("%d is not a prime number: ", n);
    }
    return 0;
}