#include<stdio.h>
 int countElem(int arr[], int n, int ele){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == ele){
            count += 1;
        }
    }
    return count;
 }

 int main(){
    int n, ele;
    printf("Enter the number of elements that you want in array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter a number that you want to count frequency in array: ");
    scanf("%d", &ele);
    int ans = countElem(arr, n, ele);
    printf("The frequency of the element %d in array is %d", ele, ans);
    return 0;
 }