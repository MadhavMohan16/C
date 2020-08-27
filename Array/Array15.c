/*program to find maximum prime no in array*/
#include<stdio.h>
int main()
{
	int a[100],b[100],n,i,j,counter,max=-32768;
    printf("Enter the number");
	scanf("%d",&n);
	if(n>=1&&n<=100)
	{
	printf("Enter the value in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		counter=0;
		for(j=2;j<a[i];j++)
		{
	       if(a[i]%j==0)
		   {
		   	counter=1;
			break;
		   }
		}
		if(counter==0)
		{
		   if(a[i]>max)
		   max=a[i];
		}
    }
    printf("Maximum prime no in array=%d",max);
}
	return 0;	
}
