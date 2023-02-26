#include<stdio.h>
#include<string.h>
#include<math.h>

char reverse(char n[100]){
    return strrev(n);
}

int main(){
    char n[100];
    int sum = 0;
    printf("Enter a hexdecimal number to convert in decimal: ");
    scanf("%s", &n);
    int j = 0;
    for(int i = strlen(n)-1; i>=0; i--, j++){
        printf("%c %d\n", n[i], j);
        if(n[i] == 'A'){
            sum = sum + 10 * pow(16, j);
        } else if(n[i] == 'B'){
            sum = sum + 11 * pow(16, j);
        } else if(n[i] == 'C'){
            sum = sum + 12 * pow(16, j);
        } else if(n[i] == 'D'){
            sum = sum + 13 * pow(16, j);
        } else if(n[i] == 'E'){
            sum = sum + 14 * pow(16, j);
        }else if(n[i]== 'F'){
            sum = sum + 15 * pow(16, j);
        }else if(n[i] >= '0' && n[i]<='9'){
            sum = sum + (n[i] - 48) * pow(16, j);
        }

    }
    printf("%d\n", sum);

    return 0;
}