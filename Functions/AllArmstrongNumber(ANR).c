#include<stdio.h>
#include<math.h>
void allArm(int);
int main()
{
	int x;
	printf("Enter the number");
	scanf("%d",&x);
	allArm(x);
	return 0;
}
void allArm(int N)
{
	int A,S;
	printf("All armstrong number till given limit\n");
	for(int i=1;i<=N;i++)
	{
		S=0;
		A=i;
		while(A!=0)
		{
			S=S+pow(A%10,3);
			A=A/10;		
		}
		if(i==S)
		printf("%d  ",i);
	}
}
