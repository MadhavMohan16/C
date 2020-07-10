#include<stdio.h>
int main()
{
	int a[100],max=-32768,secondmax=-32768,n;
	printf("Enter the value  of n");
	scanf("%d",&n);
	if(n>=1&&n<=100)
	{
		printf("Enter the value in array");
		for(int i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
     	}
     	for(int i=0;i<n;i++)
		{
			if(a[i]>max)
			max=a[i];
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]!=max&&a[i]>secondmax)
			secondmax=a[i];
		}
		printf("Second maximum no in an array=%d",secondmax);
    }
   	else
	printf("Array size limit is high");
		return 0;
}
