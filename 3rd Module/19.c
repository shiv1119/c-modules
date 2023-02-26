// compound interest

#include<stdio.h>
#include<math.h>

int main(){
    int p, y;
    float c, r;
    printf("Enter principal, rate of interest and duration: ");
    scanf("%d %f %d", &p, &r, &y);
    c = p * pow(1 + (0.01 * r), y);
    printf("%f", c);
    return 0;
}