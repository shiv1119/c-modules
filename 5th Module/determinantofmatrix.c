#include<stdio.h>

int main(){
    printf("Enter the 2 * 2 matrix elements: ");
    int arr[2][2];
    int d1 = 1, d2 = 1;
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; i++){
            if(i == j){
                d1 *= arr[i][j];
            } else {
                d2 *= arr[i][j];
            }
        }
    }
    int ans = d1 - d2;
    if(ans<0){
        ans = - ans;
    } else {
        ans = ans;
    }
    printf("%d", ans);
    return 0;

}