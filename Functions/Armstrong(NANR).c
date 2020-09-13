#include<stdio.h>
#include<math.h>
void arm();
int main()
{
	arm();
	return 0;
}
void arm()
{
	int N,A,S=0;
	printf("Enter the number");
	scanf("%d",&N);
	A=N;
	while(N!=0)
	{
		S=S+pow(N%10,3);
		N=N/10;
	}
	if(A==S)
	printf("Number is armstrong");
	else
	printf("Number is not armstrong");
}
