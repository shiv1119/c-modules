#include<stdio.h>

int main(){
    int r1,c1,r2,c2;
    printf("Enter the rows and columns of the both matrix: ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    if(c1 != r2){
        printf("Multiplication not possilbe: ");
    } else{
        int a1[r1][c1], a2[r2][c2], mul[r1][c2];
        for(int i = 0; i<r1; i++){
            for(int j = 0; j<c1; j++){
                scanf("%d", &a1[i][j]);
            }
        }
        for(int i = 0; i<r2; i++){
            for(int j = 0; j<c2; j++){
                scanf("%d", &a2[i][j]);
            }
        }
        for(int i = 0; i<r1; i++){
            for(int j = 0; j<c2; j++){
                mul[i][j] = 0;
                for(int k1 = 0, k2 = 0; k1<c1, k2<r2; k1++, k2++){
                    mul[i][j] += a1[i][k1] * a2[j][k2];
                }
            }
        }

         for(int i = 0; i<r1; i++){
            for(int j = 0; j<c2; j++){
                printf("%d ", mul[i][j]);
            }
        }
    }
    return 0;
}