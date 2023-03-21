#include<stdio.h>
#include<math.h>

int armstrong(int n){
    float rem = 0, sum = 0, count = 0;
    int q;
    q = n;
    while(q!=0){
        count += 1;
        q = q / 10;
    }
    q = n;
    while(n!=0){
        rem = n % 10;
        sum += pow(rem, count);
        n = n / 10;
    }

    return (int)sum;
}

int main(){
    int n;
    scanf("%d", &n);
    int ans = armstrong(n);
    if((int)ans == n){
        printf("armstrong number %d", ans);
    }else{
        printf("Not armstrong number: %d", ans);
    }
}