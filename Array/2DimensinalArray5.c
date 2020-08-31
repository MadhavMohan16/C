#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum1=0,sum2=0;
	printf("Enter the value in matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
    printf("Left diagonal element of the array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
			printf("%d  ",a[i][j]);
			sum1=sum1+a[i][j];
		    }
		}
	}
	printf("\nSum of Left diagonal element of the array=%d",sum1);
	printf("\nRight diagonal element of the array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j==2)
			{
		    printf("%d  ",a[i][j]);
		    sum2=sum2+a[i][j];
			}
		}
	}
	printf("\nSum of Right diagonal element of the array=%d",sum2);
	return 0;
}
