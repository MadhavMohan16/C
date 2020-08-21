#include<stdio.h>;
void mergesort(int a[],int lb,int ub);
void merge(int a[],int lb,int mid,int ub);
int main()
{
	int a[100],n,beg=0,end=n-1;
	printf("Enter the value of n");
	scanf("%d",&n);
	if(n>=1&&n<=100)
	{
		printf("Enter the value in array");
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
	    }
	    mergesort(a,beg,end);
	    printf("The sorted array");
	    for(int i=0;i<n;i++)
	    {
	    	printf("%d  ",a[i]);
		}
	}
	return 0;
}
void mergesort(int a[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
void merge(int a[],int lb,int mid,int ub)
{
	int b[100],i,j,k;
	i=lb;
	j=mid+1;
	k=lb;
	while((i<=mid)&&(j<=ub))
	{
		if(a[i]<=a[j])
		{
	     	b[k]=a[i];
		    i++;
     	}
     	else
     	{
            b[k]=a[j];
            j++;
	    }
	    k++;     
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++)
    {
	   a[k]=b[k];
    }
}
