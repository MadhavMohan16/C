#include<stdio.h>
#include<math.h>
void arm(int);
int main()
{
	int x;
	printf("Enter the no");
	scanf("%d",&x);
	arm(x);
	return 0;
}
void arm(int N)
{
	int A,S=0;
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
