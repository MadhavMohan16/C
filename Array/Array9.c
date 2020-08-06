//WAP to copy the elements of one array into another array//
#include<stdio.h>
int main()
{
	int a[100],b[100],n;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value in an array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("Copy the elements of one array into another array");
	for(int i=0;i<n;i++)
	{
		printf("%d   ",b[i]);
	}
	return 0;	
}
