//  LCM of the given three numbers

#include<stdio.h>

int gcd(int n1, int n2){
    int gd = 1;
    for(int i = 1; i<=n1; i++){
        if(n1 % i == 0 && n2 % i == 0){
            gd = i;
        }
    }
    return gd;
}


int LCM(int a, int b, int gcd){
    return (a*b)/gcd;
}

int main(){
    int n1, n2, n3, result1, result2, gd1, gd2;
    printf("Enter three number to find LCM: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    gd1 = gcd(n1, n2);
    gd2 = gcd(gd1, n3);
    result1 = LCM(n1, n2, gd2);
    result2 = LCM(result1, n3, gd2);
    printf("The LCM of the numbers %d, %d and %d is %d", n1, n2, n3, result2);

    return 0;
}