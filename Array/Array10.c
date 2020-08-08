//Program to search a  given elemnet in an array using Linear search//
#include<stdio.h>
int main()
{
	int a[100],n,element,flag=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value in an array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched  ");
    scanf("%d",&element);
    for(int i=0;i<n;i++)
    {
    	if(a[i]==element)
    	{
    		flag++;
		}
	}
	if(flag==0)
	printf("Search element is not found in an array");
	else
	printf("Search element found in an array %d times",flag);
	return 0;
}
