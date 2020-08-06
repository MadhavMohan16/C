//Remove duplicate elements in an array//
#include<stdio.h>
int main()
{
	int a[100],n;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value in an array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("New array\n");
	for(int i=0;i<n;i++)
	{
     	for(int j=i+1;j<n; )
	    {
		   if(a[i]==a[j])
           {
			  for(int k=j;k<n;k++)
		     	{
				a[k]=a[k+1];
		     	}
			n--;
	     	}
	     	else
	     	{
	     		j++;  		
			}
       }
	}
		for(int i=0;i<n;i++)
		{
		printf("%d   ",a[i]);
	    }
    return 0;
}
