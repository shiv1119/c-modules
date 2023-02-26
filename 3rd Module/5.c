// program to find the reverse of number

int main(){
    int n, q, rev = 0, rem;
    printf("Enter a number to reverse it: ");
    scanf("%d", &n);
    q = n;
    while(q != 0){
        rem = q % 10;
        printf("%d", rem);
        rev = rev * 10 + rem;
        q = q /10;
    }

    printf("The reversed of the number %d is %d", n, rev);

    return 0;
}