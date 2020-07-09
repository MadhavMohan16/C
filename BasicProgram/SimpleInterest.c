#include<stdio.h>
int main()
{
	int P,R,T,SI;
	printf("Enter the value of P,R and T");
	scanf("%d%d%d",&P,&R,&T);
	SI=(P*R*T)/100;
	printf("Simple Interest=%d",SI);
		return 0;	
}
