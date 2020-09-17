#include<stdio.h>
void prime();
int main()
{
	prime();
	return 0;
}
void prime()
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
	if(count==0)
	printf("Number is prime");
	else
	printf("Number is not prime");
}
