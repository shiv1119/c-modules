#include<stdio.h>
#include<math.h>

int main(){
    float n, inch, foot;
    scanf("%f", &n);
    inch = n / 2.54;
    foot = n / 30.48;
    printf("%.1f\n", inch);
    printf("%.1f", foot);
    return 0;
}