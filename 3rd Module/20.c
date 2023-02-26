#include<stdio.h>
#include<math.h>

int Prime(int n){
    int sq, isPrime = 0;
    sq = sqrt(n);
    for(int i = 2; i<= sq; i++){
        if(n % i == 0){
            isPrime = 1;
        }
    }
    return isPrime;
}


int main(){
    int n, result;
    printf("Enter  number  anumber to print all prime numbers: ");
    scanf("%d", &n);
    printf("2 3 ");
    if(n<3){
        printf("%d", n);
    } else {
        for(int i = 4; i<= n; i++){
            result = Prime(i);
            if(result == 0){
                printf("%d ", i);
            }
        }
    }
   
    return 0;
}