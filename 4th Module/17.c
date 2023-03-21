//  Write a program to find RightShift (x ,n)

#include<stdio.h>
#include<math.h>

int rightShift(int n, int term){
    int shifted;
    shifted = n << term;
    return shifted;
}

int main(){
    int n, term;
    printf("Enter a number and the no of terms that you want to shift: ");
    scanf("%d %d", &n, &term);
    int ans = rightShift(n, term);
    printf("%d", ans);
    return 0;
}