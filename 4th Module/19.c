 /* 
 Program to print the pattern as given below
 *
 **
 ***
 ****
 *****
 ******
 */

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    // row=" "*(n-i-1)+(ch+" ")*(i+1)

    for(int i = 1; i<=n; i++){
        for(int j = 0; j<=n-i; j++){
            printf(" ");
        }
        for(int k = 0; k <= i * 2 - 1; k++){
            printf("*");
        }
        printf("\n");
    }
}