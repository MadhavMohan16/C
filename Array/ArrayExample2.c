#include<stdio.h>
int main()
{
	int a[10],flag=0;
	printf("Enter the value in array");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
		printf("%d  ",a[i]);
		flag++;
      	}
	}
	if(flag==0)
	printf("\nNo even number found in an array");
	else
	printf("\nTotal even no found in an array=%d",flag);
	return 0;
}
