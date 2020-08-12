#include<stdio.h>
void main( )
 {
char name[20];
int units;
float rs=100;
printf("\n enter the name of the user :");
gets(name);
printf("\n enter number of units consumed :");
scanf("%d",&units);
if(units<=200)
 {
rs=rs+(units*0.80);
 }
else if(units<=300 && units>200)
 {
rs=rs+200*0.80+(units-200)*0.90;
 }
else
 {
rs=rs+200*0.80+100*0.90+(units-300)*1.00;
 }
if(rs>400)
 {
rs=rs+0.15*rs;
}
printf("%s has to pay rupees %f",name,rs);
 }
 