#include<stdio.h>
void main()
{
int n,i,a[10],key,found=0,mid,low,high;
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter the %d elements: ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the key element");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key == a[mid])
{
found=1;
break;
 }
else if(key < a[mid])
 high=mid-1;
else
 low=mid+1;
}
 if(found==1)
 printf("Number found at postion : %d",mid+1);
 else
 printf("Number is not found");

}
