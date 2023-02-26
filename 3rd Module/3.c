// Program to find the factorial of n numbers


int factorial(int n){
    int q, fact = 1;
    q = 1;
    while(q <= n){
        fact *= q;
        q += 1;
    }
    return fact;
}

int main(){
    int n, result;
    printf("Enter a number to find factorial: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("The factoril of the number %d is %d", n, result);

    return 0;
}