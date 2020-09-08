#include<stdio.h>
void fact(int);
int main()
{
	int x;
	printf("Enter the number");
	scanf("%d",&x);
	fact(x);
	return 0;
}
void fact(int N)
{
	int f=1;
	if(N<0)
	printf("Factorial not possible");
	else
	{
	for(int i=1;i<=N;i++)
	{
		f=f*i;
	}
	printf("Factorial of a number=%d",f);
    }
}
