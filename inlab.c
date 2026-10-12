#include<stdio.h>
#include <stdlib.h>
#include "record.h"
int main(){
int n, i, passcount =0;
printf("enter number of students:");
scanf("%d",&n);
struct student*st = (struct student*)malloc(n*sizeof(struct student));
for ( i=0 ; i < n ;i++ ) {
printf("\n enter details for student %d:\n",i+1);
printf("ID");
scanf("%d".&s[i].id);
printf("First Name");
scanf("%s",st[i].firstName);
printf("Family Name:");
scanf("%s",st[i].family Name);
printf("Marks");
scanf("%f",&st[i].marks);
}
printf("\n---All students Records---\n");
display(st,n);
printf("\noverall average : %.2f\n,average(st,n));
struct student *passedstudents = pass(st,n,&passcount);
if (passedstudents != NULL){

printf("\n---passed students (%d)---\n",passcount);
display(passedstudents,passcount);
free(passedstudents);
}
printf("\naverage of passed students :%.2f\n"passaverage(st,n));
free(st);
return 0;
} 
