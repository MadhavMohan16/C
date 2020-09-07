#include<stdio.h>
int sum(int,int);
int main()
{
	int x,y,z;
	printf("Enter the value of x and y");
	scanf("%d%d",&x,&y);
	z=sum(x,y);
	printf("Sum=%d",z);
	return 0;
} 
int sum(int a,int b)
{
	int c=a+b;
	return c;
}
