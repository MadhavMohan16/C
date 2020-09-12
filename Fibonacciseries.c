#include<stdio.h>
int main()
{
	int N,a=0,b=1,c;
	printf("Enter the limit");
	scanf("%d",&N);
	printf("Fibonacci series till given limit\n");
	for(int i=1;i<=N;i++)
	{
	printf("%d  ",a);
	c=a+b;
	a=b;
	b=c;
    }
}
