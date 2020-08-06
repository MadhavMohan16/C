//Print array in reverse order//
#include<stdio.h>
int main()
{
	int a[100],n;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value in an array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array in an reverse order");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d   ",a[i]);
	}
	return 0;
}
