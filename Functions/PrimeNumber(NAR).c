#include<stdio.h>
int prime();
int main()
{
	int x;
	x=prime();
	if(x)
	printf("Number is prime");
	else
	printf("Number is not prime");
	return 0;
}
int prime()
{
	int N,count=0;
	printf("Enter the number");
	scanf("%d",&N);
	for(int i=2;i<=N/2;i++)
	{
		if(N%i==0)
		{
		count++;
		break;
		}
	}
	return count==0;
}
