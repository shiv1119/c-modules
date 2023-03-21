#include<stdio.h>

int main(){
    int r, c;
    printf("Enter the size of 2-d array:row and columns:  ");
    scanf("%d %d", &r, &c);
    int arr1[r][c], arr2[r][c], matrixAddition[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j< c; j++){
            scanf("%d %d", &arr1[i][j], &arr2[i][j]);
        }
    }

    for(int i = 0; i<r; i++){
        for(int j = 0; j< c; j++){
            matrixAddition[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d + %d = %d ",arr1[i][j], arr2[i][j], matrixAddition[i][j]);
        }
        printf("\n");
    }

    return 0;
}