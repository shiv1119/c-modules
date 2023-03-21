//  Program to reverse a string without using string function
#include<stdio.h>
#include<math.h>

int main(){
    char str[100];
    gets(str);
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len += 1;
    }
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[len - i - 1]);
    }

    return 0;
}