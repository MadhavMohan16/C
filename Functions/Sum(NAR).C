#include<stdio.h>
int sum();
int main()
{
	int z;
	z=sum();
	printf("Sum=%d",z);
	return 0;
}
int sum()
{
	int a,b,c;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
