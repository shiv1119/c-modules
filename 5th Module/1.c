#include<stdio.h>
#include<string.h>

int main(){

    int x = 9;
    for(int i = 1; i<=x; i++){
        for(int j = 1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;

}