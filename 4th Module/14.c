//  Program to find the length of a string without using string functions
#include<stdio.h>
#include<math.h>

int main(){
    char str[100];
    gets(str);
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len += 1;
    }
    printf("%d", len);
    return 0;
}