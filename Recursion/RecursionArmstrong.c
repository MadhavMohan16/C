#include<stdio.h>
#include<math.h>
int arm(int);
int main()
{
	int x,y;
	printf("Enter the number");
	scanf("%d",&x);
	y=arm(x);
	if(y==x)
	printf("Number is armstrong");
	else
	printf("Number is not armstrong");
	return 0;
}
int s=0;
int arm(int N)
{
	if(N==0)
	return 0;
	s=s+pow(N%10,3);
	arm(N/10);
	return s;
}
