#include<stdio.h>
void sum();
int main()
{
	sum();
	return 0;
}
void sum()
{
	int a,b,c;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Sum=%d",c);	
}
