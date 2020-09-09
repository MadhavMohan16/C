#include<stdio.h>
int reverse(int);
int main()
{
	int x,y;
	printf("Enter the number");
	scanf("%d",&x);
	y=reverse(x);
	printf("Reverse of digit of given no=%d",y);
	return 0;
}
int reverse(int N)
{
	int R=0;
	while(N!=0)
	{
		R=R*10+N%10;
		N=N/10;
	}
	return R;
}

