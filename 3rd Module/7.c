// Program to check adams number

#include<stdio.h>
#include<math.h>

int reverse(int n){
    int q, rev = 0, rem;
    q = n;
    while(q != 0){
        rem = q % 10;
        rev = rev * 10 + rem;
        q = q /10;
    }
    return rev;
}

int square(int a){
    float sq = 0;
    sq = pow(a, 2);
    return sq;
}

int main(){
    int n, revN, sqN, sqNrev, sqRevN;
    printf("Enter number to check Adams number: ");
    scanf("%d", &n);
    revN = reverse(n);
    sqN = square(n);
    sqRevN = square(revN);
    sqNrev = reverse(sqN);

    if(sqNrev == sqRevN){
        printf("The %d numnber is adams number: ", n);
    } else {
        printf("The %d is not a adams number: ", n);
    }
    return 0;
}
