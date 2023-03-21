#include<stdio.h>

struct mystructure{
    int id;
    char name[20];
    int m1;
    int m2;
    int m3;
};

int main(){
    int n;
    printf("Enter total number of student: ");
    scanf("%d", &n);
    struct mystructure student[n];
    for(int i=0; i<n; i++){
        printf("Enter ID:- ");
        scanf("%d", &student[i].id);
        printf("Enter Name:- ");
        scanf("%s", &student[i].name);
        printf("Enter marks 1:- ");
        scanf("%d", &student[i].m1);
        printf("Enter marks 2:- ");
        scanf("%d", &student[i].m2);
        printf("Enter marks 3:- ");
        scanf("%d", &student[i].m3); 
    }
    
    for(int i=0; i<n; i++){
        int sum = 0;
        sum += student[i].m1 + student[i].m2 + student[i].m3;
        printf("Total and average marks of the %s is %d and %d\n",student[i].name,sum, sum/3);
    }
    return 0;

}