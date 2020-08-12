#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n,o,p;
	
	printf("Enter order of Matrix A");
	scanf("%d %d",&m,&n);
	
	printf("Enter order of Matrix B");
	scanf("%d %d",&o,&p);
	
	printf("Enter Elements of array A");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
	    }
	}
	
	
	
	
	printf("Enter Elements of array B");
	for(i=0;i<o;i++)
	{
		for(j=0;j<p;j++)
		{
		scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("Array C is \n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d \t ",c[i][j]);
		}
		printf("\n");
	}
	
return (0);	
}
