#include<stdio.h>
int prime(int n)
 {
int i;
for(i=2;i<n;i++)
 {
if(n%i == 0)
return 0;
 }
return 1;
 }
int main( )
 {
int n,res;
printf("\n Enter a number to check for prime or not");
scanf("%d",&n);
res=prime(n);
if (res==1)
printf(" %d is prime",n);
else
printf(" %d is not prime",n);
return 0;
 }