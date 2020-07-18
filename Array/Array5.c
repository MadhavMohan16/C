#include<stdio.h>
int main()
{
	int a[100],n,max1,max2;
	max1=max2=-32768;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value in an array");
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
    }
	for(int i=0;i<n;i++)
	{
		if(a[i]>max1)
		max1=a[i];
		else if(a[i]>max2 && a[i]<max1)
		max2=a[i];
    }
    printf("Second Maximum no in an array=%d",max2);
    return 0;
}
