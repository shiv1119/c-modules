#include<stdio.h>

struct record{
  int id;
  char name[20];
  char subject[30];
  char sem[20];
};


int main(){
    int n;
    printf("Enter the total number of student: ");
    scanf("%d", &n);
    struct record student[n];
    for(int i = 0; i<n; i++){
        printf("Enter id ");
        scanf("%d", &student[i].id);
        printf("Enter name ");
        scanf("%s", &student[i].name);
        printf("Enter subject ");
        scanf("%s", &student[i].subject);
        printf("Enter sem ");
        scanf("%s", &student[i].sem);
    }
    printf("Students information list: \n");
    for(int i=0; i<n; i++){
        printf("Name:- %d\nStudent Id:- %s\nSubject:- %s\nSemester:- %s\n", student[i].id,student[i].name,student[i].subject,student[i].sem);
    }
    return 0;

}