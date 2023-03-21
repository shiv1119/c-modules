#include<stdio.h>

int search(int arr[], int n, int el){
    int index = -1;
    for(int i = 0; i<el; i++){
        if(arr[i] == n){
            index = i;
        }
    }
    return index;
    
}

int main(){
    int el, n;
    printf("Enter the number of elements that you want in list: ");
    scanf("%d", &el);
    int arr[el];
    for(int i = 0; i<el; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element that you want to search: ");
    scanf("%d", &n);
    int ans = search(arr, n, el);
    if(ans != -1){
        printf("The element %d found in tha arry at index %d", n, ans);
    } else {
        printf("%d is not found in the array: ", n);
    }
    return 0;
}