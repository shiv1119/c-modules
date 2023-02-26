#include<stdio.h>
#include<math.h>

int main(){
    int n, p, ans;
    printf("Enter number and to the power: ");
    scanf("%d %d", &n, &p);
    ans = pow(n, p);
    printf("%d", ans);
    return 0;
}