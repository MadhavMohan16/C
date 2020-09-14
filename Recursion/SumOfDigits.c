#include<stdio.h>
int sum(int);
int main()
{
	int x,y;
	printf("Enter the number");
	scanf("%d",&x);
	y=sum(x);
	printf("Sum of digit of given number=%d",y);
	return 0;
}
int sum(int N)
{
	if(N==1)
	return 1;
	else
	return N%10+sum(N/10);
}

