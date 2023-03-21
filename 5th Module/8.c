#include<stdio.h>

struct Empolyee{
    long long int empid;
    char ename[20];
    long long int esalary;
    char des[20]
};

int main(){
    int n;
    printf("Enter the total number of empolyee: ");
    scanf("%d", &n);
    struct Empolyee Info[n];
    for(int i=0; i<n; i++){
        printf("Enter Empolyee Id: ");
        scanf("%lld", &Info[i].empid);
        printf("Enter Empolyee Name: ");
        scanf("%s", &Info[i].ename);
        printf("Enter Empolyee Salary: ");
        scanf("%lld", &Info[i].esalary);
        printf("Enter Empolyee Designation: ");
        scanf("%s", &Info[i].des);
    }
    for(int i=0; i<n; i++){
        printf("Empolyee Id:- %lld\nEmpolyee Name:- %s\nEmpolyee Salary:- %lld\nEmpolyee Designatiomn:- %s", Info[i].empid, Info[i].ename,Info[i].esalary,Info[i].des);
    }
    return 0;

}