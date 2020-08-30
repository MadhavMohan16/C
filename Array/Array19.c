//program to delete an element from the array//
#include<stdio.h>
int main()
{
	int a[100],n,i,pos;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
	    a[i]=a[i+1];
    }
	printf("After deleting the element from the array the new array are formed");
	for(i=0;i<n-1;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
