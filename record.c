
#include <stdio.h>
#include <stdlib.h>
#include "record.h"
float average (struct student s[],int size){
float sum=0;
for (int i =0 ; i< size ; i++) sum += s[i].marks;
return size ? sum /size : 0;
}
struct student *pass(struct student s[], int size, int *c0unt){
*count = 0;
for (int i = 0; i < size ;i++) if(s[i].marks >=60.0)(*count)++;
struct student *arr = malloc(*count *sizeof(struct student));
for (int i =0,j=0 ;i < size ;i++){

if (s[i].marks >=60.0) arr[j++] = s[i];
}
return arr;
}

float passaverage (struct student s[], int size) {
int count;
struct student *p = pass(s,size,&count);
float avg= average(p,count);
free(p);
return avg;
}
void display(struct student s[], int size){
for (int i =0 ; i< size ;i++) {


printf("student ID number :%\nFirst NAme :%s\nfamilyName: %s\nMarks:%.1f\n\n",s[i].id, s[i].firstName, s[i].familyName, s[i].marks);
s[i].firstName, s[i].familyName, s[i].marks;
}

