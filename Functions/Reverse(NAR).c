#include<stdio.h>
int reverse();
int main()
{
	int x;
	x=reverse();
	printf("Reverse of digit of given no=%d",x);
	return 0;
}
int reverse()
{
	int N,R=0;
	printf("Enter the number");
	scanf("%d",&N);
	while(N!=0)
	{
	R=R*10+N%10;
	N=N/10;	
	}
	return R;
}
