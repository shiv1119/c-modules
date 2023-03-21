#include<stdio.h>

int main(){
    int n;
    printf("Enter numnber of element of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d", &arr[i]);
    }

    int* ptr = &arr;

    for(int i = 0; i<n;i++){
        printf("%d ", *ptr + i);
    }
    return 0;
}