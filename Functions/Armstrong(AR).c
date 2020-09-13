#include<stdio.h>
#include<math.h>
int arm(int);
int main()
{
	int x,y;
	printf("Enter the  number");
	scanf("%d",&x);
	y=arm(x);
	if(x==y)
	printf("Number is armstrong");
	else
	printf("Number is not armstrong");
	return 0;
}
int arm(int N)
{
	int S=0;
	while(N!=0)
	{
		S=S+pow(N%10,3);
		N=N/10;
	}
	return S;
}
