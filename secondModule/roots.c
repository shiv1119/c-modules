#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c,root1, root2, dis, real ,img;
    scanf("%f %f %f", &a, &b, &c);
    dis = b * b - 4 * a * c;
    if(dis>0){
        root1 = (-b + sqrt(dis))/(2*a);
        root2 = (-b - sqrt(dis))/(2*a);
        printf ("The real roots = %f %f", root1, root2);
    } else if(dis == 0){
        root1 = -b / (2 * a);
        printf("root1 = root2 = %.2f", root1);
    } else {
        real = -b/(2*a);
        img = sqrt(-dis)/(2*a);
        printf("root1 = %.2f + %2fi and root2 = %.2f - %.2fi", real, img, real, img);
    }
    return 0;
}