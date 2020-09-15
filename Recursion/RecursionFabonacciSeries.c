#include<stdio.h>
int fib(int);
int main()
{
	int x,y;
	printf("Enter the number");
	scanf("%d",&x);
	printf("Fabonacci series till given limit\n");
	for(int i=0;i<x;i++)
	{
	y=fib(i);
	printf("%d  ",y);
    }
	return 0;
}
int fib(int N)
{
	if(N==0)
	return 0;
	else if(N==1 || N==2)
	return 1;
	return fib(N-1)+fib(N-2);
}
