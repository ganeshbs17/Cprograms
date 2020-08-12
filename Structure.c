#include<stdio.h>
#include<string.h>
struct student														//define structure
 {
int rollno;
char name[20];
float marks;
 };
 
int main()
 {
int i,n,found=0;
struct student s[10];												//sructure variables
float sum=0,average;

printf("\nEnter total number of students ");						//input details
scanf("%d",&n);
for(i=0;i<n;i++)
 {
printf("\nenter the student %d details",i+1);
printf("\n enter roll number: ");
scanf("%d",&s[i].rollno);
printf("\n enter student name: ");
scanf("%s",s[i].name);
printf("\n enter the marks: ");
scanf("%f",&s[i].marks);
 }
 
 
printf("\nStudent details are\n");									//output details
printf("\nRollno\t\tName\t\tMarks\n");
for(i=0;i<n;i++)
printf("%d\t\t %s\t\t %f\n",s[i].rollno,s[i].name,s[i].marks);

for(i=0;i<n;i++)													//calculate average
sum=sum+s[i].marks;
average=sum/n;

printf("\nAVERAGE=%f",average);										//display average

printf("\n students scoring above average\n");
for(i=0;i<n;i++)
 {
if(s[i].marks>=average)
 {
printf("%s\t",s[i].name);
 }
 }
printf("\n students scoring below average\n");
for(i=0;i<n;i++)
 {
if(s[i].marks<average)
 {
printf("%s\t",s[i].name);
found=1;
 }
 
 }
 
if(found==0)
printf("\n no students scored below average");
return 0;
 }

