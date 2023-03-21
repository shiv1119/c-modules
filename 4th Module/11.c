#include<stdio.h>

void sepratete(int arr[], int evenArr[], int oddArr[], int n){
    int x = 0, y=0;
    for(int i = 0; i<n; i++){
        if(arr[i] %2 == 0){
            evenArr[x] = arr[i];
            x++;
        } else {
            oddArr[y] = arr[i];
            y++;
        }
    }
}
void print(int x[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ", x[i]);
    }
}

int main(){
    int n, j = 0, y = 0;
    printf("Enter the no of elements that you want in array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] %2 == 0){
            j += 1;
        } else {
            y += 1;
        }
    }
    int evenArr[j], oddArr[y];
    sepratete(arr, evenArr, oddArr, n);
    printf("Even array: ");
    print(evenArr, j);
    printf("\nOdd array: ");
    print(oddArr, y);
    return 0;
}