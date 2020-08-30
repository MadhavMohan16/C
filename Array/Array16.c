//program to merge the two array without third array//
#include<stdio.h>
int main()
{
	int a[100],b[100],i,n,m;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value in first array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the value of m");
	scanf("%d",&m);
	printf("Enter the value in second array");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++)
	{
		a[n+i]=b[i];
	}
	printf("Merged array");
	for(i=0;i<(n+m);i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
