#include<stdio.h>
int main()
 {
int n,rev=0,rem=0,num;
printf("enter a number: ");
scanf("%d",&num);
n = num;
while(n!=0)
 {
rem=n%10;
rev=rev*10+rem;
n=n/10;
 }
printf("\n reversed number is %d",rev);
if(num == rev)
printf("\n %d is palindrome",num);
else
printf("\n%d is not palindrome",num);
 }
