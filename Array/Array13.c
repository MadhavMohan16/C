//WAP to print Subtraction  of one dimensional array//
#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],n;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value in an array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the value in an array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Subtraction\n");
	for(int i=0;i<n;i++)
	{
		c[i]=a[i]-b[i];
		printf("%d ",c[i]);
	}
}
