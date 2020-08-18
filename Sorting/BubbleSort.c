#include<stdio.h>
int main()
{
	int a[100],n,temp;
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
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The sorted array ");
	for(int i=0;i<n;i++)
	{
		printf("%d  ",a[i]);	
	}
  }
    else
    {  
     	printf("Array limit is high");
	}
	return 0;
}
