#include<stdio.h>
int main(){
    int a,b,c,d,e;
    float avg;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("%d\n",a+b+c+d+e);
    avg = (a+b+c+d+e)/5;
    printf("%f",avg);
    return 0;
}