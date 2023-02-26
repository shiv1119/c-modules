//  Gcd of two given numbers

#include<stdio.h>

int gcd( int x, int y){
    int gd;
    for(int i = 1; i<=x; i++){
        if(x%i == 0 && y%i == 0){
            gd = i;
        }
    }
    return gd;
}


int main(){
    int n1, n2, result;
    printf("Enter two number to find the gcd: ");
    scanf("%d %d", &n1, &n2);
    result = gcd(n1, n2);
    printf("the gcd of %d and %d is %d", n1, n2, result);

    return 0;
}