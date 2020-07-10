#include<stdio.h>
int main()
{
	int a[100],min=32768,n;
	printf("Enter the value of n");
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
			if(a[i]<min)
			min=a[i];
		}
		printf("Minimum No in an array=%d",min);
	}
	else
	printf("Array size limit is high");
		return 0;
}





