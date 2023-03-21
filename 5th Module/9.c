#include<stdio.h>

int main(){
    int *ptr;
    int n = 10;
    ptr = &n;
    printf("The address of pointer is %p", &*ptr);
    return 0;
}