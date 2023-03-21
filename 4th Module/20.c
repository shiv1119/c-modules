// Program to print the pattern in alphabets as given below
// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF


#include<stdio.h>

int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(char i = 'A'; i <= n; i++){
        for(char j = 'A'; j<= i; j++){
            printf("%c", j);
        }
        printf("\n");
    }
}