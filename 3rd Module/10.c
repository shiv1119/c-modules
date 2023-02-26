//  Program to convert decimal into binary

int decimalToBinary(int n){
    int bin = 0, op = 0, q, rem;
    q = n;
    while(q != 0){
        rem = q % 2;
        op = op * 10 + rem;
        q = q / 2;
    }
    q = op;
    while(q != 0){
        rem = q % 10;
        bin = bin * 10 + rem;
        q = q / 10;
    }
    return bin;
}

int main(){
    int n;
    printf("Enter a number to convert in  binary: ");
    scanf("%d", &n);
    printf("The binary of %d is %d", n, decimalToBinary(n));
    return 0;
}