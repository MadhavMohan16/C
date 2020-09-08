#include<stdio.h>
int fact(int);
int main()
{
	int x,y;
	printf("Enter the number");
	scanf("%d",&x);
	if(x<0)
	printf("Factorial not possible");
	else
	{
	y=fact(x);
	printf("Factorial of a number=%d",y);
    }
	return 0;
}
int fact(int N)
{
	int f=1;
	for(int i=1;i<=N;i++)
	{
		f=f*i;
	}
	return f;
}
