#include<stdio.h>
int strlength(char str1[50]);
void strconcat(char str1[50],char str2[50]);
int strcompare(char str1[50],char str2[50]);
int strlength(char str[50])
 {
int i=0;
while(str[i]!='\0')
i++;
return i;
 }
void strconcat(char str1[50],char str2[50])
 {
int i=0,l;
l=strlength(str1);
while(str2[i]!='\0')
 {
str1[l+i]=str2[i];
i++;
 }
str1[l+i]='\0';
 }
int strcompare(char str1[50],char str2[50])
 {
int i=0, k;
while(str1[i]==str2[i])
 {
if(str1[i]=='\0')
break;
i++;
 }
k=str1[i]-str2[i];
return k;
 }
int main()
 {
char source1[50],source2[50],dest[50];
int length1,length2,k;
printf("\n Enter the source string 1:");
gets(source1);
printf("\n Enter the source string 2:");
gets(source2);
length1=strlength(source1);
length2=strlength(source2);
printf("\n string length of string 1 is %d",length1);
printf("\n string length of string 1 is %d",length2);
k=strcompare(source1,source2);
if(k == 0)
printf("\n Both string are same");
else
printf("\n Both string are different");
strconcat(source1,source2);
printf("\n concatenated string is ");
puts(source1);
return 0;
}
