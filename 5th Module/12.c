#include<stdio.h>


int main(){
    char str[100];
    // fgets(str, 100, stdin);
    scanf("%[^\n]",&str);
    printf("%s", str);
    return 0;
}