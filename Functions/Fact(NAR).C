#include<stdio.h>
int fact();
int main()
{
	int x;
	x=fact();
	printf("Factorial of a number=%d",x);
	return 0;
}
int fact()
{
	int N,f=1;
	printf("Enter the number");
	scanf("%d",&N);
	if(N<0)
	printf("Factorial not possible");
	else
	{
	for(int i=1;i<=N;i++)
	{
		f=f*i;
	}
	return f;
   }
}
