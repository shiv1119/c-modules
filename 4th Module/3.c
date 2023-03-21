#include<stdio.h>

int main(){
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max = 0, min = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Max = %d, Min = %d", max, min);
    return 0;
}