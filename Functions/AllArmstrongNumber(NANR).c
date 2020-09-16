#include<stdio.h>
#include<math.h>
void allArm();
int main()
{
	allArm();
	return 0;
}
void allArm()
{
	int N,S,A;
	printf("Enter the number");
	scanf("%d",&N);
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
