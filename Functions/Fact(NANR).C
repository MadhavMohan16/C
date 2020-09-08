#include<stdio.h>
void fact();
int main()
{
	fact();
	return 0;
}
void fact()
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
	printf("Factorial of a number=%d",f);
    }
}
