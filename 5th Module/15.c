#include<stdio.h>

void reverse(int arr[], int size){
    int temp;
    int *start = arr;
    int *end = arr + (size - 1);
    while(start<end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}