#include<stdio.h>
#include<string.h>

int len(char* ptr){
    int c =0;
    while(*ptr != '\0'){
        c++;
        ptr++;
    }
    return c;
}


int main(){
    char str[100];
    scanf("%[^\n]",&str);
    printf("%d", len(str));
    return 0;
}