#include<stdio.h>
void prime(int);
int main()
{
	int x;
	printf("Enter the number");
	scanf("%d",&x);
	prime(x);
	return 0;
}
void prime(int N)
{
	int count=0;
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


