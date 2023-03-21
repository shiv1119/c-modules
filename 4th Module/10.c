#include<stdio.h>

void bubbleSortAsc(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
            }
        }
    }
}

void bubbleSortDec(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
                if(arr[j]<arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
            }
        }
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int n;
    printf("Enter the no of the elements that you want  in the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bubbleSortAsc(arr, n);
    printf("Assending order sort: ");
    printArr(arr, n);
    bubbleSortDec(arr, n);
    printf("\nDecending order sort: ");
    printArr(arr, n);
    return 0;
}