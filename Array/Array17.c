//program to merge the two array with third array//
#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],i,n,m,k;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value in first array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	k=i;
	printf("Enter the value of m");
	scanf("%d",&m);
	printf("Enter the value in second array");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		c[k]=b[i];
		k++;
	}
	printf("Merge array");
	for(i=0;i<k;i++)
	{
		printf("%d  ",c[i]);
	}
	return 0;
}
