#include<stdio.h>
void reverse(int);
int main()
{
	int x;
	printf("Enter the number");
	scanf("%d",&x);
	reverse(x);
	return 0;
}
void reverse(int N)
{
	int R=0;
	while(N!=0)
	{
		R=R*10+N%10;
		N=N/10;
	}
	printf("Reverse of digit of given no=%d",R);
}
