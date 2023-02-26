#include<stdio.h>

int main(){
    int n, len;
    float sum = 0;
    float avg;
    printf("Enter number of elements that you want in array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    len = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", len);
    for(int i = 0; i<len; i++){
        sum = sum + arr[i];
    }
    avg = (sum / n);
    printf("The sum of all elements of array is: %f\n", sum);
    printf("The avg of all elements of array is: %f", avg);
    return 0;
}