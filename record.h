#ifndef RECORD_H
#define RECORD_H
struct student {
int id;
char firstName[20];
char familyName[20];
float marks;
};
float average(struct student s[], int size);
struct student* pass(struct student s[],int size ,int *count);
float passaverage(struct student s[], int size);
void display(struct student s[], int size);
#endif
