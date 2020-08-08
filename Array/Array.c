//Program to search a  given element in an array using Binary search//
#include<stdio.h>
int main()
{
	int a[100],n,beg,end,mid,element;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value in an  array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched");
	scanf("%d",&element);
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	while(beg<=end)
	{
		if(a[mid]<element)
			beg=mid+1;
		else if(a[mid]==element)
		{
		printf("%d found at location %d.\n",element,mid+1);
		break;
      	}
		else
		end=mid-1;
		mid=(beg+end)/2;
	}
	if(beg>end)
	printf("Not found %d is not present in this array",element);
	return 0;
}
