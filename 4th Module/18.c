// Program to print the patterns as given below
// *******
// ******
// *****
// ****
// ***
// **
// *

#include<stdio.h>

int main(){
    int n;
    printf("Enter the rows of the pattern: ");
    scanf("%d", &n);
    for(int i = n; i > 0; i--){
        for(int j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
