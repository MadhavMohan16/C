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
	printf("Duplicate elements in an array\n");
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		if(a[i]==a[j])
			printf("%d   ",a[j]);			
	    }
    }
	return 0;
}
