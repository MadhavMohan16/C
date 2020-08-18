#include<stdio.h>
int main()
{
	int a[100],n,temp,min;
	printf("Enter the value of n");
	scanf("%d",&n);
	if(n>=1&&n<=100)
	{
		printf("Enter the value in array");
		for(int i=0;i<n;i++)
		{
		    scanf("%d",&a[i]);
        }
        for(int i=0;i<n-1;i++)
        {
        	min=i;
        	for(int j=i+1;j<n;j++)
        	{
        		if(a[j]<a[min])
				min=j;
	        }
	        if(min!=i)
	        {
	        	temp=a[min];
	        	a[min]=a[i];
	        	a[i]=temp;
			}
		}
		printf("The sorted array  ");
		for(int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
	}
	else
	{
		printf("Array limit is high");
	}
	return 0;
}
