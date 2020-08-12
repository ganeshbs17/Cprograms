#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b;
char op;
float result;
printf("Enter the expression: ");
scanf("%d %c %d",&a,&op,&b);
switch(op)
{
case '+': result=a+b;
 break;
case '-': result=a-b;
 break;
case '*': result=a*b;
 break;
case '%': result=a%b;
 break;
case '/': if(b==0)
 {
 printf("not divisible by zero");
 exit(0);
 }
 result=a/b;
 break;
default: printf("Invalid Operator");
 exit(0);
 }
 printf("The result of %d %c %d = %f \n",a,op,b,result);
}
