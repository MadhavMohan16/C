#include<stdio.h>
#include<math.h>
int arm();
int main()
{
	int x;
	x=arm();
	if(x)
	printf("Number is armstrong");
	else
	printf("Number is not armstrong");
	return 0;	
}
int arm()
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
	return A==S;	
}
