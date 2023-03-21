#include<stdio.h>

int main(){
    int n1, n2;
    printf("Enter the number of ros and columns of matrix: ");
    scanf("%d %d", &n1, &n2);

    int arr[n1][n2];
    for(int i =0; i<n1; i++){
        for(int j = 0; j<n2; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i =0; i<n2; i++){
        for(int j = 0; j<n1; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
