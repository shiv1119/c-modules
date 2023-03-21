#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int arr1[n], arr2[n], sumArr[n];
    for(int i = 0; i<n; i++){
        printf("Enter the elements of 1st array and second array: ");
        scanf("%d %d", &arr1[i], &arr2[i]);
    }
    
    for(int i = 0; i<n; i++){
        sumArr[i] = arr1[i] + arr2[i];
        printf("%d ",sumArr[i]);
    }

    return 0;
}