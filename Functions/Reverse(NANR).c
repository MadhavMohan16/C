#include<stdio.h>
void reverse();
int main()
{
	reverse();
	return 0;
}
void reverse()
{
	int N,R=0;
	printf("Enter the number");
	scanf("%d",&N);
	while(N!=0)
	{
		R=R*10+N%10;
		N=N/10;
	}
	printf("Reverse of digit of given no=%d",R);
}
