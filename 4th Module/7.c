#include<stdio.h>

int main(){
    int n;
    printf("Enter no of rows of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int dia=0;

    for(int i = 0,x=n; i<n,x<0; i++,x--){
        for(int j = 0, y = n; j<n, y>0; j++, y--){
            if(i == j){
                dia += arr[i][j];
            }
        }
    }
    printf("%d", dia);

    return 0;
}