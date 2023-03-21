#include<stdio.h>


int main(){
    int row, col;
    printf("Enter the rows and columns of the matrix: ");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int rowSum = 0;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            rowSum += arr[i][j];
        }
        printf("Row %d sum is %d\n",i+1, rowSum);
        rowSum = 0;
    }

    int colSum = 0;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            colSum += arr[j][i];
        }
        printf("Column %d sum is %d\n",i+1, colSum);
        colSum = 0;
    }
   
    return 0;
}