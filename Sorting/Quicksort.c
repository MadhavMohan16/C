#include<stdio.h>
void quicksort(int a[100],int lb,int ub)
{
	int pivot,start,end,temp;
	if(lb<ub)
	{
	pivot=lb;
	start=lb;
	end=ub;
	while(start<end)
	{
		while(a[start]<=a[pivot]&&start<ub)
		start++;
		while(a[end]>a[pivot])
		end--;
        if(start<end)
	    {
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
	    }
    } 
        temp=a[pivot];
		a[pivot]=a[end];
		a[end]=temp;
		quicksort(a,lb,end-1);
		quicksort(a,end+1,ub);
	}
}
int main()
{
	int a[100],n;
	printf("Enter the value of n");
	scanf("%d",&n);
		printf("Enter the value in array");
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
	    quicksort(a,0,n-1);
	    printf("The sorted array");
	    for(int i=0;i<n;i++)
	    	printf("%d  ",a[i]);
	return 0;
}
