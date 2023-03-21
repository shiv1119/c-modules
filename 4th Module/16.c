// Program to find whether the given string is a palindrome without using string functions
#include<stdio.h>
#include<math.h>

int main(){
    char str[100];
    gets(str);
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len += 1;
    }
    int  x = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != str[len - i - 1]){
            x = 1;
        }
    }

    if(x == 0){
        printf("%s is a palindrome: ", str);
    } else {
        printf("%s is not a palindrome: ", str);
    }

    return 0;
}